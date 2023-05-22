#ifndef BARKRECOGNIZER_H
#define BARKRECOGNIZER_H
#include "../1_taking_requirements/DogDoor.hpp"
#include <string>

class BarkRecognizer {
private:
    DogDoor door;
public:
    BarkRecognizer (DogDoor &door1);

    void recognize(std:: string bark);
};

#endif