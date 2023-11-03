//
// Created by supre on 02-11-2023.
//

#include "main_menu.h"

main_menu::main_menu(const std::string &option_tag) : option(option_tag) {
}

void main_menu::execute() {
    std::cout << "[a] Agregar " << "\n";
    std::cout << "[b] Remover " << "\n";
}
