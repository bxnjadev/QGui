//
// Created by supre on 02-11-2023.
//

#ifndef QGUI_REMOVE_OPTION_H
#define QGUI_REMOVE_OPTION_H

#include "../gui/option/option.h"

class remove_option : public option {
public:
    remove_option(const std::string& option_tag);

    void execute() override;

};

#endif //QGUI_REMOVE_OPTION_H
