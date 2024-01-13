#include "Inventory.hpp"
#include<iostream>
void Inventory::addGuitar(string serialNumber, double price, GuitarSpec* spec) {
    Guitar* newGuitar = new Guitar(serialNumber, price, spec);
    guitars.push_back(newGuitar);
}

Guitar* Inventory::getGuitar(string& serialNumber) {
    for (Guitar* guitar: guitars) {
        if (guitar -> getSerialNumber() == serialNumber) {
            return guitar;
        }
    }
    return NULL;
}


vector<Guitar*> Inventory::search(GuitarSpec* customerSpec) {
    vector<Guitar*> matchingGuitars;
    for (Guitar* guitar: guitars) {
        GuitarSpec* inventorySpec = guitar -> getSpec();
        if (!customerSpec->matches(inventorySpec)) continue;
        matchingGuitars.push_back(guitar);
    }
    return matchingGuitars;
}

Inventory::~Inventory() {
    for(Guitar* guitar: guitars) {
        cout << "we are deleting guitar with serialNumber " << guitar -> getSerialNumber() << "\n";
        delete guitar;
    }
}
