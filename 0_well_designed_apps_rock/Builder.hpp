#ifndef BUILDER_H
#define BUILDER_H
#include<iostream>

enum class Builder {
    FENDER,
    MARTIN,
    GIBSON,
    COLLINGS,
    OLSON,
    RYAN,
    PRS,
    ANY
};

std::ostream& operator << (std::ostream&, Builder);

#endif