//
// Created by 01szy on 29.05.2023.
//

#ifndef ARKUSZKALKULACYJNYPROJEKT_CELL_INTERFACE_H
#define ARKUSZKALKULACYJNYPROJEKT_CELL_INTERFACE_H


#include <string>
using namespace std;
//interface
class cellInterface{
protected:
    int type;
    float number;
    string word;
public:
    virtual ~cellInterface() {}
    virtual float getFloat() const = 0;
    virtual string getString() const = 0;
    virtual void setField(float f) = 0;
    virtual void setField(string s) = 0;
    virtual int getType() const = 0;
};
#endif //ARKUSZKALKULACYJNYPROJEKT_CELL_INTERFACE_H
