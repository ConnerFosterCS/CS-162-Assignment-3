#include "animal.h"

//#ifndef MONKEY_H
//#define MONKEY_H

/*********************************************************************
** Class: Monkey
** Description: This class holds the monkey information.
*********************************************************************/ 
class Monkey : public Animal{
    private:
        string status;
    public:
        Monkey(); //animal constuctor
        Monkey(string babystatus); //alternate animal constuctor
        Monkey(const Monkey& other); //animal copy constructor

};

//#endif