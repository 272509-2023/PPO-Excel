//
// Created by 01szy on 30.05.2023.
//
#include<iostream>
#include<string>
#include<vector>
#include "sheet.h"
#include "cell_interface.h"

using namespace std;

sheet::sheet(){
    vector<cell*> size_row;
        for(int i=0;i<5;i++){
            cell* add = new cell_float();
            size_row.push_back(add);
        }
        excel.push_back(size_row);
}
sheet::sheet(int row,int column) {
    vector<cell *> size_row;
    for (int i = 0; i < column; i++) {
        cell *add = new cell_float();
        size_row.push_back(add);
    }
    for (int i = 0; i < row; i++) {
        excel.push_back(size_row);
    }
}
int sheet::getSizeofCollumn() {
        return excel[0].size();
}
int sheet::getSizeofRow() {
    return excel.size();
}

void sheet::resizeColumn() {
    for(int i=0;i<excel.size();i++){
        cell_float *size= new cell_float();
        excel[i].push_back(size);
    }
}

void sheet::resizeRow() {
    vector <cell*> size_row;
    for(int i=0;i<excel[0].size();i++){
        cell_float *add=new cell_float;
        size_row.push_back(add);
    }
    excel.push_back(size_row);
}

void sheet::setCell(int row, int column, float n) {
    excel[row][column]->setField(n);
}

void sheet::setCell(int row, int column, string s) {
    excel[row][column]->setField(s);
}

void sheet::printSheet() {
    for(int j=0;j<excel.size();j++){
        for(int i=0;i<excel[j].size();i++){
            if(excel[j][i]->idCell()==0){
                cout<<" | "<<excel[j][i]->getFloat();
            }else{
                cout<<" | "<<excel[j][i]->getString();
            }
        }
        cout<<" |"<<endl;
    }
}

sheet::~sheet() {
    for(vector<cell*> v : excel) {
        for(cell* c : v) {
            delete c;
        }
    }
}

float sheet::sumCells(int start, int end, int amongus, bool direction) {
    float sum = 0.0;
    if(direction)  { //rows
        for(; start <= end; start++) {
            sum += excel[start][amongus]->getFloat();
        }
    } else {
        for(; start <= end; start++) {
            sum += excel[amongus][start]->getFloat();
        }
    }
    return sum;
}

float sheet::averageCells(int start, int end, int amongus, bool direction) {
    int number_of_cells = end - start;
    return sumCells(start, end, amongus, direction) / number_of_cells;

}