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
    vector <cell*> test_row;
        for(int i=0;i<5;i++){
            cell_float*add=new cell_float;
            test_row.push_back(add);
        }
        excel.push_back(test_row);
}
sheet::sheet(int row,int column) {
    vector<cell *> test_row;
    for (int i = 0; i < column; i++) {
        cell_float *add = new cell_float;
        test_row.push_back(add);
    }
    for (int i = 0; i < row; i++) {
        excel.push_back(test_row);
    }
}
int sheet::getSizeofCollumn() {
        return excel[0].size();
}
int sheet::getSizeofRow() {
    return excel.size();
}

void sheet::resizeColumn() {
    cell_float *test= new cell_float();
    for(int i=0;i<excel.size();i++){
        excel[i].push_back(test);
    }

}
void sheet::resizeRow() {
    vector <cell*> test_row;
    for(int i=0;i<excel[0].size();i++){
        cell_float *add=new cell_float;
        test_row.push_back(add);
    }
    excel.push_back(test_row);
}
void sheet::setCell(int row, int column, cell *add) {
    excel[row][column]=add;
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

