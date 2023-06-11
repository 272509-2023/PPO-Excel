//
// Created by 01szy on 29.05.2023.
//

#ifndef ARKUSZKALKULACYJNYPROJEKT_CELL_FLOAT_H
#define ARKUSZKALKULACYJNYPROJEKT_CELL_FLOAT_H
#pragma once
#include <string>
#include "cell_interface.h"

class cell_float {
private:
    float number;
    string word;
public:
    cell_float();
    cell_float(float _number);
    float getFloat();
    string getStr();
    void setStr(string _word);
    void setFloat(float _number);
    int idCell();

};


#endif //ARKUSZKALKULACYJNYPROJEKT_CELL_FLOAT_H
