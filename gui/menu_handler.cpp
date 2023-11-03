//
// Created by supre on 02-11-2023.
//

#include "menu_handler.h"

menu_handler::menu_handler(menu *main_menu) : main_menu_(main_menu), actual_menu_(main_menu) {
}

void menu_handler::show() {
    actual_menu_->show();
}

void menu_handler::click(const std::string& option_tag) {
    auto *new_menu = actual_menu_->click(option_tag);

    if (new_menu != nullptr) {
        actual_menu_ = new_menu;
    }
}

menu* menu_handler::get_main_menu() const {
    return main_menu_;
}
