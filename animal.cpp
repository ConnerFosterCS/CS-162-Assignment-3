#include "animal.h"

//animal constuctor
Animal::Animal() {
    this -> age = 5;
}

//alternate animal constuctor
Animal::Animal(int babyage) {
    this -> age = babyage;
}

//animal copy constructor
Animal::Animal(const Animal& other) {
    cout << "Animal Copy Constructor Called" << endl;

}

//acsessors and mutators
void Animal::set_age(int ages) {
    this -> age = ages;
}

int Animal::get_age() const{
    return age;
}

//functions
/*********************************************************************
** Function: increment_age()
** Description: This function adds one week the animals ages in the arrays
** Parameters: none
** Pre-Conditions: game is running in while(true) loop
** Post-Conditions: owned animals become one week older
*********************************************************************/
void Animal::increment_age() {
    this -> age++;
}