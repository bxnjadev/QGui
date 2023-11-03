//
// Created by supre on 02-11-2023.
//

#include "remove_option.h"

remove_option::remove_option(const std::string &option_tag) : option(option_tag) {
}

void remove_option::execute() {
    std::cout << "removiendo " << "\n";
}
