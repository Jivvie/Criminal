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
    const string f_name = "Mia";
    bool knowsMaleSecret;
    bool knowsFemaleSecret;
    /** Allows user to do things with the MarriedCouple struct. Users can:
     -Socialize with the couple -Flirt with the couple -Dance with the couple **/
    void interactWithCouple();
    void setFemaleSecret();
    void aboutMale();
    void aboutFemale();
    //default constructor
    MarriedCouple();
private:
    
    
};
#endif /* MarriedCouple_hpp */
