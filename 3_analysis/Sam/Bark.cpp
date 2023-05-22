#include "Bark.hpp"
using namespace std;

Bark:: Bark() {}

Bark:: Bark(string sound) {
    this -> sound = sound;
}

string Bark:: getSound() {
    return sound;
}

bool Bark:: equals(Bark bark) {
    // work of comparing strings is delegated to Bark class
    return sound == bark.sound;
}