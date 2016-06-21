//
//  MainChar.hpp
//  Criminal
//
//  Created by Gjvon Graves on 6/11/16.
//  Copyright © 2016 Mitnov. All rights reserved.
//

#ifndef MainChar_hpp
#define MainChar_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class MainChar
{
private:
    int sanityLevel;
    int totalKills;
    int killStreak;
    const int MAX_SANITY = 50;
    const int MIN_SANITY = 0;
    
public:
    MainChar();
    MainChar(string);
    void setName(string);
    string name;
};

#endif /* MainChar_hpp */
