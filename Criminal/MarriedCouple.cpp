//
//  MarriedCouple.cpp
//  Criminal
//
//  Created by Gjvon Graves on 6/21/16.
//  Copyright © 2016 Mitnov. All rights reserved.
//

#include "MarriedCouple.hpp"

MarriedCouple::MarriedCouple()
{
    bool knowsMaleSecret = false;
    bool knowsFemaleSecret = false;
    //female height in inches
};

void MarriedCouple::setFemaleSecret()
{
    knowsFemaleSecret = true;
}

/** Allows the user to get a full block of text that includes things the user should know about the female. **/
void MarriedCouple::aboutFemale()
{
    cout << "Her name is " << f_name << endl << "She is 5 ft, 8 inches tall. 21 years old. Mia is African American, has long thick legs and thin eyebrows." <<
    " In high school she was called 'nappy headed' and was ridiculed for her bad speech. Her IQ is normal. Mia has no kids and dislikes " <<
    "the bunch very much. She is a terrible kisser but believes this is false. There is nothing extraordinary or good about little Mia. " <<
    " She enjoys flirting with any mind that fills the holes in her marriage." << endl;
    /** If the user knows the secret,  this block of code should display **/
    if (knowsFemaleSecret)
    {
        
    }
    /** If the secret is not know, this block of code will run/display **/
    else
    {
        
    }
}