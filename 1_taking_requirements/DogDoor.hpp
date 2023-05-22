#ifndef DOGDOOR_H
#define DOGDOOR_H
class DogDoor {
private:
    bool opened;
public:
    DogDoor();

    void open();
    
    void close();
    
    bool isOpen();
};
#endif