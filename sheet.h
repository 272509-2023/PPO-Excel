//
// Created by 01szy on 30.05.2023.
//

#ifndef ARKUSZKALKULACYJNYPROJEKT_SHEET_H
#define ARKUSZKALKULACYJNYPROJEKT_SHEET_H
#pragma once
#include<string>
#include<vector>
#include "cell_float.h"
#include "cell_str.h"
#include "cell_interface.h"

using namespace std;

class sheet {
private:
    vector<vector<cell*>> excel;
public:
    sheet();
    sheet(int row,int column);
    void setCell(int row, int column, cell *add);
    int getSizeofRow();
    int getSizeofCollumn();
    void resizeRow();
    void resizeColumn();
    void printSheet();


};


#endif //ARKUSZKALKULACYJNYPROJEKT_SHEET_H
