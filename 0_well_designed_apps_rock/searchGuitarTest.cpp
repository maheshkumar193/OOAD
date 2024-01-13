#include "Inventory.hpp"
#include "GuitarSpec.hpp"
#include<iostream>
using namespace std;


int main() {
    Inventory inventory;

    GuitarSpec* spec1 = new GuitarSpec(Builder::FENDER, "stratocaster", Type::ELECTRIC, Wood::ALDER, Wood::ALDER, 6);

    inventory.addGuitar("193319", 512, spec1);

    vector<Guitar*> matchingGuitars = inventory.search(spec1);

    if (!matchingGuitars.empty()) {
        for (Guitar* matchingGuitar: matchingGuitars) {
            cout << "we have something\n";
            cout << "we have " << matchingGuitar -> getSpec() << "is yours at just " << matchingGuitar -> getPrice() << "$\n";
        }
    } else {
        cout << "this search feature is not working, please recheck\n";
    }
}
