//
// Created by 01szy on 29.05.2023.
//

#ifndef ARKUSZKALKULACYJNYPROJEKT_CELL_INTERFACE_H
#define ARKUSZKALKULACYJNYPROJEKT_CELL_INTERFACE_H


#include <string>
using namespace std;

class cell{
protected:
    int type;
    float number;
    string word;
public:
    cell();
    virtual float getFloat() = 0;
    virtual string getString() = 0;
    void setField(float f);
    void setField(string s);
    int idCell();
};
#endif //ARKUSZKALKULACYJNYPROJEKT_CELL_INTERFACE_H
