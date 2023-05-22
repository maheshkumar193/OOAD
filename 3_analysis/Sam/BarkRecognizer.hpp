#ifndef BARKRECOGNIZER_H
#define BARKRECOGNIZER_H
#include "DogDoor.hpp"
#include "Bark.hpp"

class BarkRecognizer {
private:
    DogDoor door;
public:
    BarkRecognizer (DogDoor &door1);

    void recognize(Bark bark);
};

#endif