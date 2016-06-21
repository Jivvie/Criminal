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

struct MarriedCouple
{
    /** Information on Female **/
    const string f_name;
    const int f_age;
    const int f_height;
    /** Information on Male **/
    const string m_name;
    const int m_age;
    const int m_height;


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
    /** Allows user to do things with the MarriedCouple struct. Users can:
      -Socialize with the couple -Flirt with the couple -Dance with the couple **/
    void interactWithCouple();
private:
    Victim victim;
    const string TITLE = "BAR LEVEL";
    
};

#endif /* BarLevel_hpp */
