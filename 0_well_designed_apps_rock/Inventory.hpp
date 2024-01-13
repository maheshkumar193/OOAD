#ifndef INVENTORY_H
#define INVENTORY_H
#include "Guitar.hpp"
#include<vector>
class Inventory {
private:
    vector<Guitar*> guitars;
public:
    Inventory() {
    }

    void addGuitar(string, double, GuitarSpec*);

    Guitar* getGuitar(string& serialNumber);

    vector<Guitar*> search(GuitarSpec* spec);

    ~Inventory();
};

#endif