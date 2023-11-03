//
// Created by supre on 02-11-2023.
//

#ifndef QGUI_MENU_H
#define QGUI_MENU_H


#include "option/option.h"
#include "helper/menu_helper.h"
#include "section_shower.h"

class menu {

public:

    menu(int options_capacity, int options_menu_capacity,
         section_shower* shower, const std::string &option_tag_prev);

    void show();

    std::string get_option_tag_prev() const;

    menu* click(const std::string& option_tag);

    void install_menu(menu* menu);

    void install_option(option* option);

private:

    std::string option_tag_prev_;

    int option_size_;
    int options_menu_size_;

    section_shower* shower_;
    option** options_;
    menu** menus_;
};



#endif //QGUI_MENU_H
