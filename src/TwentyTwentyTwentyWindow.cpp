//
// Created by ozan on 03.03.21.
//

#include "../include/TwentyTwentyTwentyWindow.h"
#include <iostream>
#include <utility>
#include <gtkmm-3.0/gtkmm/label.h>

using namespace Gtk;

TwentyTwentyTwentyWindow::TwentyTwentyTwentyWindow(string title, string label, const int &height,
                                                   const int &width)  : _title(std::move(title)), _height(height), _width(width) {
    set_title(_title);
    set_default_size(_width, _height);
    this->add(_label);
    _label.set_label(label);
    show_all();
}

TwentyTwentyTwentyWindow::~TwentyTwentyTwentyWindow() = default;
