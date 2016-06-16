//
//  MapLevel.hpp
//  Criminal
//
//  Created by Gjvon Graves on 6/12/16.
//  Copyright © 2016 Mitnov. All rights reserved.
//

#ifndef MapLevel_hpp
#define MapLevel_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

struct Bar
{
    const string book = "Hi, this is text";
    const string bartender = "Just doing his job";
    
};

class MapLevel
{
public:
    string getMapLevel();
    void setMapLevel();
    
private:
    
    
    
};
#endif /* MapLevel_hpp */
