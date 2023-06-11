//
// Created by 01szy on 29.05.2023.
//

#ifndef ARKUSZKALKULACYJNYPROJEKT_CELL_INTERFACE_H
#define ARKUSZKALKULACYJNYPROJEKT_CELL_INTERFACE_H

#endif //ARKUSZKALKULACYJNYPROJEKT_CELL_INTERFACE_H
#include <string>
using namespace std;

class cell{
protected:
    virtual int idcell()=0;
public:
    virtual float getFloat()=0;
    virtual string getString()=0;
    virtual void setFloat()=0;
    virtual void setString()=0;
    virtual int idCell()=0;
};
