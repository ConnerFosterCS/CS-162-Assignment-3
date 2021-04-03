#include "monkey.h"

//monkey constructor
Monkey::Monkey() {
    this -> status = "Adult";
}

//alternate monkey constructor
Monkey::Monkey(string babystatus) {
    this -> status = babystatus;
}

//monkey copy constuctor
Monkey::Monkey(const Monkey& other) {
    cout << "Monkey Copy Constructor Called" << endl;

}