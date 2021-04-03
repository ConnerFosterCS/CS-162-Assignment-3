#include "animal.h"

//#ifndef MEERKAT_H
//#define MEERKAT_H

/*********************************************************************
** Class: Meerkat
** Description: This class holds the meerkat information.
*********************************************************************/ 
class Meerkat : public Animal{
    private:
        string status;
    public:
        Meerkat(); //animal constuctor
        Meerkat(string babystatus); //alternate animal constuctor
        Meerkat(const Meerkat& other); //animal copy constructor

};

//#endif