//
// Created by 01szy on 29.05.2023.
//

#ifndef ARKUSZKALKULACYJNYPROJEKT_CELL_STR_H
#define ARKUSZKALKULACYJNYPROJEKT_CELL_STR_H
#pragma once
#include <string>
#include "cell_interface.h"


class cell_str : public cell {
public:
    cell_str();
    cell_str(string _word);
    float getFloat();
    string getString();
    void setString(string _word);
    void setFloat(float _number);
    int idCell();

};


#endif //ARKUSZKALKULACYJNYPROJEKT_CELL_STR_H
