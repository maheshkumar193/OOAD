#include "BarkRecognizer.hpp"
#include "DogDoor.hpp"
#include <iostream>
using namespace std;

BarkRecognizer:: BarkRecognizer (DogDoor &door1) {
    door = door1;
}

void BarkRecognizer:: recognize(Bark bark) {
    cout << " BarkRecognizer: Heard a `" + bark.getSound() + "'\n";
    vector<Bark> allowedBarks= door.getAllowedBarks();
    for (Bark allowedBark: allowedBarks) {
        if (allowedBark.equals(bark)) {
            door.open();
            return;
        }
    }
    cout << "can't let this dog in...\n";
}