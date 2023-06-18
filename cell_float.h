//
// Created by 01szy on 29.05.2023.
//

#ifndef ARKUSZKALKULACYJNYPROJEKT_CELL_FLOAT_H
#define ARKUSZKALKULACYJNYPROJEKT_CELL_FLOAT_H
#pragma once
#include <string>
#include "cell_interface.h"

class cell_float : public cell {
public:
    cell_float();
    cell_float(float _number);
    float getFloat();
    string getString();
    void setString(string _word);
    void setFloat(float _number);

};


#endif //ARKUSZKALKULACYJNYPROJEKT_CELL_FLOAT_H
