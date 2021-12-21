//
// Created by mrerzincan on 22.09.21.
//

#ifndef INC_20_20_20_HELPER_TWENTYTWENTYTWENTYSCREENLOCKCHECKER_H
#define INC_20_20_20_HELPER_TWENTYTWENTYTWENTYSCREENLOCKCHECKER_H

#include <glib.h>
#include <gio/gio.h>

class TwentyTwentyTwentyScreenLockChecker {
public:
    TwentyTwentyTwentyScreenLockChecker();

    virtual ~TwentyTwentyTwentyScreenLockChecker();

    bool screenLocked();

private:
    GDBusConnection *_connection;
};


#endif //INC_20_20_20_HELPER_TWENTYTWENTYTWENTYSCREENLOCKCHECKER_H
