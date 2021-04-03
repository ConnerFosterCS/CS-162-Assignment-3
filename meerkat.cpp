#include "meerkat.h"

//meerkat constructor
Meerkat::Meerkat() {
    this -> status = "Adult";
}

//alternate meerkat constructor
Meerkat::Meerkat(string babystatus) {
    this -> status = babystatus;
}

//Meerkat copy constuctor
Meerkat::Meerkat(const Meerkat& other) {
    cout << "Meerkat Copy Constructor Called" << endl;

}