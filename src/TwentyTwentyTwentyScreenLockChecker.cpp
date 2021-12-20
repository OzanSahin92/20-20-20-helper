//
// Created by mrerzincan on 22.09.21.
//

#include "TwentyTwentyTwentyScreenLockChecker.h"
#include <iostream>

/* Gnome Screensaver */
#define GS_SERVICE                      "org.gnome.ScreenSaver"
#define GS_PATH                         "/org/gnome/ScreenSaver"
#define GS_INTERFACE                    "org.gnome.ScreenSaver"

/* DBus */
#define DBUS_SERVICE                    "org.freedesktop.DBus"
#define DBUS_PATH                       "/org/freedesktop/DBus"
#define DBUS_INTERFACE                  "org.freedesktop.DBus"

TwentyTwentyTwentyScreenLockChecker::TwentyTwentyTwentyScreenLockChecker() {
    GError *error = nullptr;
    _connection = g_bus_get_sync (G_BUS_TYPE_SESSION, NULL, &error);

};

TwentyTwentyTwentyScreenLockChecker::~TwentyTwentyTwentyScreenLockChecker() = default;

static gboolean screensaver_is_running(GDBusConnection
                                       *connection) {
    GVariant *reply;
    gboolean exists = FALSE;

    g_return_val_if_fail (connection != NULL, FALSE);

    reply = g_dbus_connection_call_sync(connection,
                                        DBUS_SERVICE,
                                        DBUS_PATH,
                                        DBUS_INTERFACE,
                                        "GetNameOwner",
                                        g_variant_new("(s)", GS_SERVICE),
                                        NULL,
                                        G_DBUS_CALL_FLAGS_NO_AUTO_START,
                                        -1,
                                        NULL,
                                        NULL);
    if (reply != NULL) {
        exists = TRUE;
        g_variant_unref(reply);
    }

    return
            exists;
}

static GDBusMessage *
screensaver_send_message_void(GDBusConnection *connection,
                              const char *name,
                              gboolean expect_reply) {
    GDBusMessage *message, *reply;
    GError *error;

    g_return_val_if_fail (connection != NULL, NULL);
    g_return_val_if_fail (name != NULL, NULL);

    message = g_dbus_message_new_method_call(GS_SERVICE,
                                             GS_PATH,
                                             GS_INTERFACE,
                                             name);
    if (message == NULL) {
        g_warning ("Couldn't allocate the dbus message");
        return NULL;
    }

    error = NULL;

    if (!expect_reply) {
        reply = NULL;

        g_dbus_connection_send_message(connection,
                                       message,
                                       G_DBUS_SEND_MESSAGE_FLAGS_NONE,
                                       NULL,
                                       &error);

    } else {
        reply = g_dbus_connection_send_message_with_reply_sync(connection,
                                                               message,
                                                               G_DBUS_SEND_MESSAGE_FLAGS_NONE,
                                                               -1,
                                                               NULL,
                                                               NULL,
                                                               &error);
    }

    if (error != NULL) {
        g_warning ("unable to send message: %s", error->message);
        g_clear_error(&error);
    }

    g_dbus_connection_flush_sync(connection, NULL, &error);
    if (error != NULL) {
        g_warning ("unable to flush message queue: %s", error->message);
        g_clear_error(&error);
    }

    g_object_unref(message);

    return reply;
}

bool TwentyTwentyTwentyScreenLockChecker::screenLocked() {
    GDBusMessage *reply;
    GVariant *body;
    GError *error = nullptr;
    gboolean v;

    if (!screensaver_is_running(_connection)) {
        std::cout << "Screensaver is not running!" << std::endl;
    }

    reply = screensaver_send_message_void(_connection, "GetActive", TRUE);
    if (reply == NULL) {
        std::cout << "Did not receive a reply from the screensaver." << std::endl;
    }

    body = g_dbus_message_get_body(reply);
    g_variant_get(body, "(b)", &v);
    g_object_unref(reply);

    if (v) {
        return true;
    } else {
        return false;
    }
}

