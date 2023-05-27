#include <iostream>
#include "BarkRecognizer.hpp"
#include "../Sam/Bark.hpp"
#include <chrono>
#include <thread>
using namespace std;

int main() {
    DogDoor door;
    Bark bark1("rowlf"), bark2("rooowlf"), bark3("rawlf"), bark4("woof"), bark5("yip");
    door.putAllowedBark(bark1);
    door.putAllowedBark(bark2);
    door.putAllowedBark(bark3);
    door.putAllowedBark(bark4);

    BarkRecognizer recognizer(door);
    // simulate hardware hearing a bark
    cout << "bruce starts barking\n";
    recognizer.recognize(bark1);
    cout << "bruce has gone outside\n";
    this_thread::sleep_for(chrono::milliseconds(10000));
    cout << "bruce is all done, but he is outside\n";

    // simulate hardware hearing a bark (not bruce)
    cout << "another dog starts barking\n";
    recognizer.recognize(bark5);
    this_thread::sleep_for(chrono::milliseconds(5000));

    // simulate hardware hearing a bark again
    cout << "bruce starts barking\n";
    recognizer.recognize(bark2);
    cout << "bruce back inside ..\n";
    this_thread::sleep_for(chrono::milliseconds(5000));
    return 0;
}