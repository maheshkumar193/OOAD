#ifndef DOGDOOR_H
#define DOGDOOR_H
#include "../Sam/Bark.hpp"
#include <vector>
class DogDoor {
private:
    bool opened;
    std:: vector<Bark> allowedBarks;
public:
    DogDoor();

    void open();

    void close();
 
    bool isOpen();

    void putAllowedBark(Bark);

    std:: vector<Bark> getAllowedBarks();
};
#endif