#include"DogDoor.hpp"
#include<bits/stdc++.h>
using namespace std;

DogDoor:: DogDoor() {
    opened = false;
}

void DogDoor:: open() {
    cout << "opening the dog door\n";
    opened = true;
}

void DogDoor:: close() {
    cout << "closing the dog door\n";
    opened = false;
}

bool DogDoor:: isOpen() {
    return opened;
}