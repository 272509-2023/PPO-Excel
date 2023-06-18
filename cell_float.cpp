//
// Created by 01szy on 29.05.2023.
//
#include<iostream>
#include<string>
#include "cell_float.h"
#include "cell_interface.h"

float cell_float::getFloat() {
    return 0;
}
string cell_float::getString() {
    return word;
}
void cell_float::setFloat(float _number) {}

void cell_float::setString(string word) {
    this->word=word;
}
cell_float::cell_float() {
    type = 1;
}

cell_float::cell_float(float _number){
    number=_number;
}
