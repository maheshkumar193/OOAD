#include<iostream>
#include "DogDoor.hpp"
#include <chrono>
#include <thread>
#include <unistd.h>
#include <functional>
using namespace std;

DogDoor:: DogDoor() {
    opened = false;
}

void DogDoor:: open() {
    cout << "opening the dog door\n";
    opened = true;
    function<void()> closeAutomatic= [&] () {
        this_thread::sleep_for(chrono::milliseconds(5000));
        close();
    };
    thread t(closeAutomatic);
    t.detach();
}

void DogDoor:: close() {
    cout << "closing the dog door\n";
    opened = false;
}

bool DogDoor:: isOpen() {
    return opened;
}

void DogDoor:: putAllowedBark(Bark bark) {
    allowedBarks.push_back(bark);
}

vector<Bark> DogDoor:: getAllowedBarks() {
    return allowedBarks;
}
