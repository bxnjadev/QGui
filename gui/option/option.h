//
// Created by supre on 02-11-2023.
//

#ifndef QGUI_OPTION_H
#define QGUI_OPTION_H

#include "iostream"

class option {

public:

    option(const std::string& option_tag);

    std::string get_option_tag() const;

    virtual void execute() = 0;

private:
    std::string option_tag_;
};


#endif //QGUI_OPTION_H
