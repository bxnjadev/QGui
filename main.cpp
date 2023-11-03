#include <iostream>
#include "own_menu/add_option.h"
#include "own_menu/main_menu_section.h"
#include "gui/menu.h"
#include "own_menu/remove_option.h"
#include "gui/menu_handler.h"

int main() {

    auto* main_section = new main_menu_section();
    auto *main_menu = new menu(2, 0, main_section, "");

    auto *option_add_menu = new add_option("a");
    auto *option_remove_menu = new remove_option("b");

    main_menu->install_option(option_add_menu);
    main_menu->install_option(option_remove_menu);

    auto *menu = new menu_handler(main_menu);

    while (true) {
        std::string value;
        menu->get_main_menu()->show();

        std::getline(std::cin, value);
        menu->click(value);
    }

    return 0;
}
