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
        gui/menu_helper.cpp
        gui/menu_helper.h
        gui/menu_handler.cpp
        gui/menu_handler.h
        own_menu/remove_option.cpp
        own_menu/remove_option.h
        own_menu/main_menu.cpp
        own_menu/main_menu.h)
