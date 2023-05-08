#include <iostream>
#include "BarkRecognizer.hpp"
using namespace std;

BarkRecognizer:: BarkRecognizer (DogDoor &door1) {
    door = door1;
}

void BarkRecognizer:: recognize(string bark) {
    cout << " BarkRecognizer: Heard a `" << bark << "'\n";
    door.open();
}