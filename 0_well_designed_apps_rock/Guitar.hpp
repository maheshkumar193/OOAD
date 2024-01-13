#ifndef GUITAR_H
#define GUITAR_H
using namespace std;

#include "GuitarSpec.hpp"

class Guitar {
private:
    string serialNumber;
    double price;
    GuitarSpec* spec;
public:
    Guitar(string, double, GuitarSpec*);

    string getSerialNumber();

    double getPrice();

    void setPrice(double);

    GuitarSpec* getSpec();
};

#endif