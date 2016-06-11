//
//  Victim.cpp
//  Criminal
//
//  Created by Gjvon Graves on 6/11/16.
//  Copyright © 2016 Mitnov. All rights reserved.
//

#include "Victim.hpp"
#include <stdlib.h> 

Victim :: Victim()
{
    
}

int Victim :: getAge()
{
    // variable for random age
    int num;
    /**
     generate a random age between 21 and 55. We do not want victims under 21 due to 'moral'
     reasons. Children are an obvious no go.
     **/
    num = rand() % 34 + 21;
    //return age
    return num;
}

/** @param Height: will be in centimeters **/
int Victim :: getHeight()
{
    //random height variable
    int num;
    //generate a random height in cm
    num = rand() % 39 + 148;
    //return height cm
    return num;
}

string Victim :: getName()
{
    return name;
}

void Victim :: setName(const string s)
{
    name = s;
}

/**  TO DO: LATER **/
char Victim :: getRace()
{
    return 0;
}


