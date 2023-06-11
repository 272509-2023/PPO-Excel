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
string cell_float::getStr() {
    return word;
}
void cell_float::setFloat(float _number) {

}
void cell_float::setStr(string _word) {
    word=_word;
}
cell_float::cell_float() {
    word="";
}

int cell_float::cell_float(float _number){
    number=_number;
}
int cell_float::idCell() {
    return 1;
}