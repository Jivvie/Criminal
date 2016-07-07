//
//  BarLevel.cpp
//  Criminal
//
//  Created by Gjvon Graves on 6/18/16.
//  Copyright © 2016 Mitnov. All rights reserved.
//

#include "BarLevel.hpp"

BarLevel::BarLevel()
{
    MarriedCouple marriedCouple;
    startBarLevel();
}

void BarLevel::startBarLevel()
{
    /* if the user is done with this level set 'userIsDone' to 'false' **/
    bool userisDone = false;
    int userSelection;
    while(!userisDone)
    {
        cout << TITLE << endl << endl<< "1. Tend to Married Couple " << endl << "2. Tend to Cop " << endl << "3. Tend to Drunk Female" << endl << "4. Tend to Drunk Male" << endl << endl;
        cout << "Make your selection.... Then Enter." << endl;
        cin >> userSelection;
        switch (userSelection)
        {
            case 1:
                interactWithCouple();
                cout << "****----____Back to bar..." << endl;
                break;
                
            default:
                userisDone = true;
                break;
        }
    }
}

void BarLevel::interactWithCouple()
{
    int selection;
    bool doneWithCouple = false;
    while(!doneWithCouple)
    {
        cout << "1. About Female 2. About Male " << endl << endl;
        cout << "Make your selection.... Then Enter." << endl;
        cin >> selection;
        switch (selection)
        {
            case 1:
                marriedCouple.aboutFemale();
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
                
            default:
                doneWithCouple = true;
                break;
        }
    }
}