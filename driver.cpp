/**********************************************************************
 ** Program: assignment3.cpp (Zoo Tycoon)
 ** Author: Conner Foster
 ** Date: 05/05/2019
 ** Decription: The objective of this game is to create a zoo tycoon that involves the implementation of inheritance with classes and object arrays.
 ** Ouput: Number of weeks, balance, number of each animal, incomes, outcomes, special events.
 *********************************************************************/

#include "zoo.h"

int main() {
    Zoo z;
    z.start(); 
    while(true) { //game running loop
        z.header();
        z.increase_age();
        z.random_event();
        z.revenue();
        z.buy_animal();
        z.buy_feed();
        z.continue_game();
    }
}