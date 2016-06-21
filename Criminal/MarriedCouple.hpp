//
//  MarriedCouple.hpp
//  Criminal
//
//  Created by Gjvon Graves on 6/21/16.
//  Copyright © 2016 Mitnov. All rights reserved.
//

#ifndef MarriedCouple_hpp
#define MarriedCouple_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class MarriedCouple
{
public:
    /** Information on Female **/
    const string f_name;
    const int f_age;
    const int f_height;
    /** Information on Male **/
    const string m_name;
    const int m_age;
    const int m_height;
    /** Allows user to do things with the MarriedCouple struct. Users can:
     -Socialize with the couple -Flirt with the couple -Dance with the couple **/
    void interactWithCouple();
private:
    
    
};
#endif /* MarriedCouple_hpp */
