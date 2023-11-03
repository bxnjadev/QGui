//
// Created by supre on 02-11-2023.
//

#include "menu.h"

void menu::show() {
    first_part_->execute();
}

menu *menu::click(const std::string &option_tag) {

    for (int i = 0; i < option_size_; i++) {

        if (options_[i]->get_option_tag() == option_tag) {
            options_[i]->execute();
            return nullptr;
        }
    }

    for (int i = 0; i < options_menu_size_; i++) {
        if (menus_[i]->get_option_tag_prev() == option_tag) {
            return menus_[i];
        }
    }

    std::cout << "Opcion no valida " << "\n";
    return nullptr;
}

std::string menu::get_option_tag_prev() const {
    return option_tag_prev_;
}

void menu::install_menu(menu *menu) {
    menus_[options_menu_size_] = menu;
    options_menu_size_++;
}

void menu::install_option(option *option) {
    options_[option_size_] = option;
    option_size_++;
}

menu::menu(int options_capacity, int options_menu_capacity, option *first_part, const std::string &option_tag_prev)
        : option_tag_prev_(option_tag_prev),
          first_part_(first_part) {
    options_ = new option *[options_capacity];

    if (options_menu_capacity != 0) {
        menus_ = new menu *[options_menu_capacity];
        menu_helper::fill_array_as_empty(menus_, options_menu_capacity);
    }


    option_size_ = 0;
    options_menu_size_ = 0;

    menu_helper::fill_array_as_empty(options_, options_capacity);

}




