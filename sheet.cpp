//
// Created by 01szy on 30.05.2023.
//
#include<iostream>
#include<string>
#include <fstream>
#include<vector>
#include "sheet.h"
#include "cell.h"

using namespace std;
//konstruktor
sheet::sheet(){
    vector<cell> size_row;
        for(int i=0;i<5;i++){
            cell add = cell();
            size_row.push_back(add);
        }
        excel.push_back(size_row);
}
//konstruktor z ustawioną wielkością tabeli
sheet::sheet(int row,int column) {
    vector<cell> size_row;
    for (int i = 0; i < column; i++) {
        cell add = cell();
        size_row.push_back(add);
    }
    for (int i = 0; i < row; i++) {
        excel.push_back(size_row);
    }
}
//funkcja dodająca kolumne
void sheet::resizeColumn() {
    for(int i=0;i<excel.size();i++){
        cell size= cell();
        excel[i].push_back(size);
    }
}
//funkcja dodająca rząd
void sheet::resizeRow() {
    vector <cell> size_row;
    for(int i=0;i<excel[0].size();i++){
        cell add= cell();
        size_row.push_back(add);
    }
    excel.push_back(size_row);
}
//funkcja która udawia komórkę na danej pozycji, ustawia float
void sheet::setCell(int row, int column, float n) {
    excel[row][column].setField(n);
}
//funkcja która udawia komórkę na danej pozycji, ustawia string
void sheet::setCell(int row, int column, string s) {
    excel[row][column].setField(s);
}
//funkcja drukująca tabele
void sheet::printSheet() {
    for(int j=0;j<excel.size();j++){
        for(int i=0;i<excel[j].size();i++){
            if(excel[j][i].getType()==1){
                cout<<" | "<<excel[j][i].getFloat();
            }else{
                cout<<" | "<<excel[j][i].getString();
            }
        }
        cout<<" |"<<endl;
    }
}
//destruktor
sheet::~sheet() {}
//funkcja sumująca
float sheet::sumCells(int start, int end, int amongus, bool direction) {
    float sum = 0.0;
    if(direction)  { //rows
        for(; start <= end; start++) {
            if (excel[start][amongus].getType() == 1) {
                sum += excel[start][amongus].getFloat();
            }
        }
    } else {
        for(; start <= end; start++) {
            if (excel[amongus][start].getType() == 1) {
                sum += excel[amongus][start].getFloat();
            }
        }
    }
    return sum;
}
//funkcja obliczająca średnią
float sheet::averageCells(int start, int end, int amongus, bool direction) {
    int number_of_cells = end - start;
    return sumCells(start, end, amongus, direction) / number_of_cells;

}
// funkcja zapisu do pliku
void sheet::saveToFile(std::string filename) {
    std::fstream file;
    file.open(filename, std::fstream::out);
    if(!file.is_open()) {
        return;
    }
    int size_x = excel.size();
    int size_y = excel[0].size();
    file << size_x << " " << size_y << "\n";
    for(auto vec : excel) {
        for(auto cell : vec) {
            switch(cell.getType()) {
                case 0: {file << "0\n"; break;}
                case 1: {file << "1 " <<cell.getFloat() << "\n"; break;}
                case 2: {file << "2 " << cell.getString() << "\n"; break;}
            }
        }
    }
    file.close();
}
//funkcja odczytu z pliku
void sheet::loadFromFile(string filename) {
    std::fstream file;
    file.open(filename, std::fstream::in);
    if(!file.is_open()) {return;}
    int size_x, size_y;
    file >> size_x >> size_y;
    for(int i = 0; i < size_x; i++) {
        std::vector<cell> vec;
        cout << "amongus\n";
        for(int j = 0; j < size_y; j++) {
            cout << "sussy\n";
            int type;
            cell c;
            file >> type;
            if(type == 0) {}
            else if(type == 1) {
                float f;
                file >> f;
                c.setField(f);
            } else if(type == 2) {
                string s;
                file >> s;
                c.setField(s);
            }
            vec.push_back(c);
        }
        excel.push_back(vec);
    }
}