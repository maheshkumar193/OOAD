#include <string>
#include "Bark.hpp"
#ifndef DOGDOOR_H
#define DOGDOOR_H
class DogDoor {
private:
    bool opened;
    Bark allowedBark;
public:
    DogDoor();

    void open();
    
    void close();
    
    bool isOpen();

    void setAllowedBark(Bark);

    Bark getAllowedBark();
};
#endif