//
// Created by 01szy on 30.05.2023.
//

#ifndef ARKUSZKALKULACYJNYPROJEKT_SHEET_H
#define ARKUSZKALKULACYJNYPROJEKT_SHEET_H
#pragma once
#include<string>
#include<vector>
#include "cell.h"

using namespace std;

class sheet {
private:
    vector<vector<cell>> excel;
public:
    sheet();
    sheet(int row,int column);
    ~sheet();
    void setCell(int row, int column, float n);
    void setCell(int row, int column, string s);
    void resizeRow();
    void resizeColumn();
    void printSheet();
    float sumCells(int start, int end, int amongus, bool direction);
    float averageCells(int start, int end, int amongus, bool direction);
    void saveToFile(string filename);
    void loadFromFile(string filename);


};


#endif //ARKUSZKALKULACYJNYPROJEKT_SHEET_H
