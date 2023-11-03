//
// Created by supre on 02-11-2023.
//

#ifndef QGUI_MENU_HANDLER_H
#define QGUI_MENU_HANDLER_H

#include "menu.h"

class menu_handler {
public:

    menu_handler(menu* main_menu);

    void show();

    void click(const std::string& option_tag);

    menu* get_main_menu() const;

private:
    menu* main_menu_;
    menu* actual_menu_;
};



#endif //QGUI_MENU_HANDLER_H
