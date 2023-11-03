//
// Created by supre on 02-11-2023.
//

#ifndef QGUI_ADD_OPTION_H
#define QGUI_ADD_OPTION_H


#include "../gui/option/option.h"

class add_option : public option {
public:
    add_option(const std::string& option_tag);

    void execute() override;

};



#endif //QGUI_ADD_OPTION_H
