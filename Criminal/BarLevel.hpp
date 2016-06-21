//
//  BarLevel.hpp
//  Criminal
//
//  Created by Gjvon Graves on 6/18/16.
//  Copyright © 2016 Mitnov. All rights reserved.
//

#ifndef BarLevel_hpp
#define BarLevel_hpp

#include <stdio.h>
#include "Victim.hpp"
#include <iostream>

using namespace std;

struct DrunkMale
{
    const string name;
};


struct DrunkFemale
{
    /** Information on Drunk Female **/
    const string name;
    
};

struct PoliceOfficer
{
    const string name;
};

struct BlackBar
{
    
};

class BarLevel
{
public:
private:
    Victim victim;
    const string TITLE = "BAR LEVEL";
    
};

#endif /* BarLevel_hpp */
