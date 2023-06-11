//
// Created by 01szy on 29.05.2023.
//

#include<iostream>
#include<string>
#include "cell_str.h"
#include "cell_interface.h"

float cell_str::getFloat() {
    return 0;
}
string cell_str::getString() {
    return word;
}
void cell_str::setFloat(float _number) {

}
void cell_str::setString(string _word) {
    word=_word;
}
cell_str::cell_str() {
    word="";
}
cell_str::cell_str(string _word){
    word=_word;
}
int cell_str::idCell() {
    return 1;
}
