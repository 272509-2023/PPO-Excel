//
// Created by 01szy on 22.06.2023.
//

#include "cell.h"
//konstruktor komórki
cell::cell() {
    type = 0;
    word = "";
    number = 0.0;
}
//getter do float
float cell::getFloat() const {
    return number;
}
//getter do stringa
string cell::getString() const {
    return word;
}
// getter do typu
int cell::getType() const {
    return type;
}
// setter do obszaru float
void cell::setField(float f) {
    number = f;
    type = 1;
}
// setter do obszaru string
void cell::setField(std::string s) {
    word = s;
    type = 2;
}
//destruktor
cell::~cell() {}