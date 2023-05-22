#include<iostream>
#include"../1_taking_requirements/Remote.hpp"
using namespace std;

Remote:: Remote(DogDoor door1) {
    door = door1;
}

void Remote:: pressButton() {
    cout << "pressing the remote controll button\n";
    if (door.isOpen()) {
        door.close();
    } else {
        door.open();
    }
}
