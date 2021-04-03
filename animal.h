#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifndef ANIMAL_H
#define ANIMAL_H

using namespace std;

/*********************************************************************
** Class: Animal
** Description: This class deals with all of the inherited values of the three animals.
*********************************************************************/ 
class Animal {
    private:
        int age;
    public:
        Animal(); //animal constuctor
        Animal(int babyage); //alternate animal constuctor
        Animal(const Animal& other); //animal copy constructor

        //acsessors and mutators
        void set_age(int ages);
        int get_age() const;

        //functions
        void increment_age();
};

#endif