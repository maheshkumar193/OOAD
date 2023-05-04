#include<iostream>
#include"Remote.hpp"
#include"DogDoor.hpp"
#include <chrono>
#include <thread>
using namespace std;

int main () {
    DogDoor door;
    Remote remote(door);
    cout << "Fido barks to go outside..." << endl;
    remote.pressButton();
    cout << "Fido has gone outside..." << endl;
    cout << "Fido has all done..." << endl;
    cout << "Fido back inside..." << endl;
    this_thread::sleep_for(chrono::milliseconds(25));
    return 0;
}