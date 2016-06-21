//
//  Location.hpp
//  Criminal
//
//  Created by Gjvon Graves on 6/18/16.
//  Copyright © 2016 Mitnov. All rights reserved.
//

#ifndef Location_hpp
#define Location_hpp

#include <stdio.h>
#include <iostream>
#include "Victim.hpp"
#include "MainChar.hpp"

using namespace std;


class Location
{
public:
    void getTime();
    string setTime();
private:
    string timeStamp;
    MainChar mainCharacter;
    
};

#endif /* Location_hpp */
