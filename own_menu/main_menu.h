//
// Created by supre on 02-11-2023.
//

#ifndef QGUI_MAIN_MENU_H
#define QGUI_MAIN_MENU_H

#include "../gui/option/option.h"

class main_menu : public option {
public:

    main_menu(const std::string& option_tag);

    void execute() override;

};


#endif //QGUI_MAIN_MENU_H
