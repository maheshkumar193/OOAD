#include<iostream>
#include <chrono>
#include <thread>
#include <unistd.h>
#include <functional>
#include"Remote.hpp"
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
        function<void()> closeAutomatic= [&] () {
            this_thread::sleep_for(chrono::milliseconds(5000));
            door.close();
        };
        thread t(closeAutomatic);
        t.detach();
    }
}
