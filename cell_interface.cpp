//
// Created by 01szy on 16.06.2023.
//

#include "cell_interface.h"


int cell::idCell() {
    return type;
}

void cell::setField(float f) {
    number = f;
}

void cell::setField(std::string s) {
    word = s;
}

cell::cell() {
    number = 0.0;
    word = "";
}