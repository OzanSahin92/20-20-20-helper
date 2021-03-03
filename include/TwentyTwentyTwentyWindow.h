//
// Created by ozan on 03.03.21.
//

#ifndef INC_20_20_20_HELPER_TWENTYTWENTYTWENTYWINDOW_H
#define INC_20_20_20_HELPER_TWENTYTWENTYTWENTYWINDOW_H

#include <gtkmm-3.0/gtkmm.h>
#include <string>

using namespace std;

class TwentyTwentyTwentyWindow : public Gtk::Window {
public:
    TwentyTwentyTwentyWindow(string title, string label, const int &height, const int &_width);
    virtual ~TwentyTwentyTwentyWindow();

private:
    string _title;
    Gtk::Label _label;
    int _height;
    int _width;
};


#endif //INC_20_20_20_HELPER_TWENTYTWENTYTWENTYWINDOW_H
