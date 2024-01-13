#include "Guitar.hpp"

Guitar:: Guitar(string serialNumber, double price, GuitarSpec* spec) {
    this -> serialNumber = serialNumber;
    this -> price = price;
    this -> spec = spec;
}

string Guitar::getSerialNumber() {
    return serialNumber;
}

double Guitar::getPrice() {
    return price;
}

void Guitar::setPrice(double price) {
    this -> price = price;
}

GuitarSpec* Guitar::getSpec() {
    return spec;
}

