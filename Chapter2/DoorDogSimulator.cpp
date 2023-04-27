#include<bits/stdc++.h>
#include"Remote.cpp"
#include"DogDoor.cpp"
using namespace std;

int main () {
    DogDoor door;
    Remote remote(door);
    cout << "Fido barks to go outside...\n";
    remote.pressButton();
    cout << "Fido has gone outside...\n";
    remote.pressButton();
    cout << "Fido has all done...\n";
    remote.pressButton();
    cout << "Fido back inside...\n";
    remote.pressButton();
    return 0;
}