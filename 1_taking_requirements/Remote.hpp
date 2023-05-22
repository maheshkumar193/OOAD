#ifndef REMOTE_H
#define REMOTE_H
#include"DogDoor.hpp"
class Remote {
private:
    DogDoor door;
public:
    Remote(DogDoor door);

    void pressButton();
};
#endif