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
    const string m_name = "Drow";
    bool knowsMaleSecret;
    bool knowsFemaleSecret;
    /** Allows user to do things with the MarriedCouple struct. Users can:
     -Socialize with the couple -Flirt with the couple -Dance with the couple **/
    void interactWithCouple();
    /** if female secret is known, variable should be set to 'true' **/
    void setFemaleSecret();
    /** When the user does something wrong, or does not hold enough information, Mia will refuse them altogether.
     If the user gets an answer wrong or gives the wrong reaction, this function will be called. **/
    void femaleRefusal();
    // TODO: Stuff..
    void aboutMale();
    /** Function that gives information about the female character and allows the user to interact with her. **/
    void aboutFemale();
    //default constructor
    MarriedCouple();
private:
    
    
};
#endif /* MarriedCouple_hpp */
