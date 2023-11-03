//
// Created by supre on 02-11-2023.
//

#include "add_option.h"


void add_option::execute() {
    std::cout << "Hola :D, vamos a agregar" << "\n";
}

add_option::add_option(const std::string &option_tag) : option(option_tag) {

}
