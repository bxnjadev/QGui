cmake_minimum_required(VERSION 3.26)
project(QGui)

set(CMAKE_CXX_STANDARD 17)

add_executable(QGui main.cpp
        gui/option/option.cpp
        gui/option/option.h
        own_menu/add_option.cpp
        own_menu/add_option.h
        gui/menu.cpp
        gui/menu.h
        gui/helper/menu_helper.cpp
        gui/helper/menu_helper.h
        gui/menu_handler.cpp
        gui/menu_handler.h
        own_menu/remove_option.cpp
        own_menu/remove_option.h
        gui/builder/builder_menu.cpp
        gui/builder/builder_menu.h
        gui/section_shower.cpp
        gui/section_shower.h
        own_menu/main_menu_section.cpp
        own_menu/main_menu_section.h)
