//
//  card.hpp
//  Pic10B HW2
//
//  Created by Michaella Baltazar on 10/24/19.
//  Copyright © 2019 Michaella Baltazar. All rights reserved.
//

#ifndef card_hpp
#define card_hpp
#include <string>
#include <iostream>

#include <stdio.h>
using namespace std;

class card
{
public:
    card();
    card(string institutionName, string holderName, int expirationDate);
    string getInstutution();
    string getName();
    int getExpiration();
    virtual void print();
protected:
    string institution;
    string name;
    int date;
};

#endif /* card_hpp */
