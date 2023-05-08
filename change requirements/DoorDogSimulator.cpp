#include<iostream>
#include"DogDoor.hpp"
#include"Remote.hpp"
#include"BarkRecognizer.hpp"
#include <chrono>
#include <thread>
using namespace std;

int main () {
    DogDoor door;
    Remote remote(door);
    BarkRecognizer recognizer(door);
    cout << "Fido barks to go outside..." << endl;
    // remote.pressButton();
    recognizer.recognize("Woof");

    cout << "Fido has gone outside..." << endl;
    cout << "Fido has all done..." << endl;
    this_thread::sleep_for(chrono::milliseconds(10000));
    cout << "...but he is stuck outside\n";
    cout << "Fido starts barking ...\n";
    // cout << "Gina grabs the remote controll\n";
    // remote.pressButton();
    recognizer.recognize("Woof");
    cout << "Fido back inside..." << endl;
    this_thread::sleep_for(chrono::milliseconds(5000));
    return 0;
}