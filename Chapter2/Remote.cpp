#include<bits/stdc++.h>
using namespace std;
#include"Remote.hpp"

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