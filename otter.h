#include "animal.h"

//#ifndef OTTER_H
//#define OTTER_H

/*********************************************************************
** Class: Monkey
** Description: This class holds the monkey information.
*********************************************************************/ 
class Otter : public Animal{
    private:
        string status;
    public:
        Otter(); //animal constuctor
        Otter(string babystatus); //alternate animal constuctor
        Otter(const Otter& other); //animal copy constructor

};

//#endif