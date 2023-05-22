#include<string>
#ifndef DOGDOOR_H
#define DOGDOOR_H
class DogDoor {
private:
    bool opened;
    std:: string allowedBark;
public:
    DogDoor();

    void open();
    
    void close();
    
    bool isOpen();

    void setAllowedBark(std:: string);

    std:: string getAllowedBark();
};
#endif