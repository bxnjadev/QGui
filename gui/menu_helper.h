//
// Created by supre on 02-11-2023.
//

#ifndef QGUI_MENU_HELPER_H
#define QGUI_MENU_HELPER_H


class menu_helper {

public:

    template<typename T>
    static void fill_array_as_empty(T **array, int capacity);


};

template<typename T>
void menu_helper::fill_array_as_empty(T **array, int capacity) {
    for (int i = 0; i < capacity; i++) {
        array[i] = nullptr;
    }
}



#endif //QGUI_MENU_HELPER_H
