#include "GuitarSpec.hpp"
#include<iostream>

GuitarSpec::GuitarSpec(Builder builder, string model, Type type, Wood backWood, Wood topWood, int numStrings) {
    this -> builder = builder;
    this -> model = model;
    this -> type = type;
    this -> backWood = backWood;
    this -> topWood = topWood;
    this -> numStrings = numStrings;
}

Builder GuitarSpec::getBuilder() {
    return builder;
}

string GuitarSpec::getModel() {
    return model;
}

Type GuitarSpec::getType() {
    return type;
}

Wood GuitarSpec::getBackWood() {
    return backWood;
}

Wood GuitarSpec::getTopWood() {
    return topWood;
}

int GuitarSpec::getNumStrings() {
    return numStrings;
}

bool GuitarSpec::matches(GuitarSpec* otherSpec) {
    if (builder != otherSpec -> getBuilder()) return false;
    if (model != otherSpec -> getModel()) return false;
    if (type != otherSpec -> getType()) return false;
    if (backWood != otherSpec -> getBackWood()) return false;
    if (topWood != otherSpec -> getTopWood()) return false;
    if (numStrings != otherSpec -> getNumStrings()) return false;
    return true;
}

std::ostream& operator << (std::ostream& Gout, GuitarSpec* spec) {
    Gout << spec -> getBuilder()
    << " " << spec -> getType() << " guitar:\n"
    << spec -> getBackWood() << " back and sides " << spec -> getTopWood() << " top.\n";
    return Gout;
}
