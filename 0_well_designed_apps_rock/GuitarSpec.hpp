#ifndef GUITAR_SPEC_H
#define GUITAR_SPEC_H
using namespace std;

#include <string>
#include "Type.hpp"
#include "Builder.hpp"
#include "Wood.hpp"

class GuitarSpec {
private:
    Builder builder;
    string model;
    Type type;
    Wood backWood;
    Wood topWood;
    int numStrings;
public:
    GuitarSpec() {
    }

    GuitarSpec(Builder, string, Type, Wood, Wood, int);

    Builder getBuilder();

    string getModel();

    Type getType();

    Wood getBackWood();

    Wood getTopWood();

    int getNumStrings();

    bool matches(GuitarSpec*);

    friend std::ostream& operator << (std::ostream& Gout, GuitarSpec*);
};

#endif