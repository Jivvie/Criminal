//
//  Victim.hpp
//  Criminal
//
//  Created by Gjvon Graves on 6/11/16.
//  Copyright © 2016 Mitnov. All rights reserved.
//

#ifndef Victim_hpp
#define Victim_hpp

#include <stdio.h>
#include <iostream>
using namespace std;


enum class Race:char
{
    Black = 'B', Asian = 'A', Caucasian = 'C',
    Hawaiin = 'H'
};

class Victim
{
private:
    string name;
    string age;
    Race race;
    
public:
    Victim();
    int getHeight();
    char getRace();
    string getName();
    void setName(string);
    int getAge();
    
};

#endif /* Victim_hpp */
