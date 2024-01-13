#include<iostream>
#include "Builder.hpp"
#include "Type.hpp"
#include "Wood.hpp"

std::ostream& operator << (std::ostream& Bout, Builder builder) {
    switch(static_cast<int>(builder)) {
        case 0:
            Bout << "FENDER";
            break;
        case 1:
            Bout << "MARTIN";
            break;
        case 2:
            Bout << "GIBSON";
            break;
        case 3:
            Bout << "COLLINGS";
            break;
        case 4:
            Bout << "OLSON";
            break;
        case 5:
            Bout << "RYAN";
            break;
        case 6:
            Bout << "PRS";
            break;
        case 7:
            Bout << "ANY";
            break;
    }
    return Bout;
}

std::ostream& operator << (std::ostream& Tout, Type type) {
    switch(static_cast<int>(type)) {
        case 0:
            Tout << "ACOUSTIC";
            break;
        case 1:
            Tout << "ELECTRIC";
            break;
    }
    return Tout;
}

std::ostream& operator << (std::ostream& Wout, Wood wood) {
    switch(static_cast<int>(wood)) {
        case 0:
            Wout << "INDIAN_ROSEWOOD";
            break;
        case 1:
            Wout << "BRAZILIAN_ROSEWOOD";
            break;
        case 2:
            Wout << "MAHOGANY";
            break;
        case 3:
            Wout << "MAPL";
            break;
        case 4:
            Wout << "COCOBOLO";
            break;
        case 5:
            Wout << "CEDAR";
            break;
        case 6:
            Wout << "ADIRONDACK";
            break;
        case 7:
            Wout << "ALDER";
            break;
        case 8:
            Wout << "SITKA";
            break;
    }
    return Wout;
}