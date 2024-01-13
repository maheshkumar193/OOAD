#ifndef TYPE_H
#define TYPE_H
#include<iostream>

enum class Type {
    ACOUSTIC,
    ELECTRIC
};

std::ostream& operator << (std::ostream&, Type);

#endif