#include <iostream>
#include "BarkRecognizer.hpp"
#include "Bark.hpp"
#include "DogDoor.hpp"
using namespace std;

BarkRecognizer:: BarkRecognizer (DogDoor &door1) {
    door = door1;
}

void BarkRecognizer:: recognize(Bark bark) {
    if (door.getAllowedBark().equals(bark)) door.open();
}
