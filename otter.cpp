#include "otter.h"

//otter constructor
Otter::Otter() {
    this -> status = "Adult";
}

//alternate otter constructor
Otter::Otter(string babystatus) {
    this -> status = babystatus;
}

//otter copy constuctor
Otter::Otter(const Otter& other) {
    cout << "Otter Copy Constructor Called" << endl;

}