//
// Created by supre on 02-11-2023.
//

#include "option.h"

option::option(const std::string &option_tag) : option_tag_(option_tag) {
}

std::string option::get_option_tag() const {
    return option_tag_;
}