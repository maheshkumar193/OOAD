#include <string>
#ifndef BARK_H
#define BARK_H
class Bark {
private:
    std:: string sound;
public:
    Bark();

    Bark(std:: string sound);

    std:: string getSound();

    bool equals(Bark sound);
};
#endif