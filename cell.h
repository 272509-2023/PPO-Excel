//
// Created by 01szy on 22.06.2023.
//

#ifndef ARKUSZKALKULACYJNYPROJEKT_CELL_H
#define ARKUSZKALKULACYJNYPROJEKT_CELL_H

#include "cell_interface.h"
//klasa cell dziedzicząca interface
class cell : public cellInterface {
public:
    cell();
    ~cell();
    string getString() const;
    float getFloat() const;
    void setField(float f);
    void setField(string s);
    int getType() const;
};



#endif //ARKUSZKALKULACYJNYPROJEKT_CELL_H
