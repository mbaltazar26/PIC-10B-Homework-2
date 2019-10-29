//
//  card.cpp
//  Pic10B HW2
//
//  Created by Michaella Baltazar on 10/24/19.
//  Copyright © 2019 Michaella Baltazar. All rights reserved.
//

#include "card.hpp"

using namespace std;

card::card()
{
    institution = "";
    name = "";
    date = 0;
}

card::card(string institutionName, string holderName, int expirationDate)
{
    institution = institutionName;
    name = holderName;
    date = expirationDate;
}

string card::getInstutution()
{
    return institution;
}

string card::getName()
{
    return name;
}

int card::getExpiration()
{
    int modDate;
    if (date == 0)
        modDate = 99999999;
    else
    {
        int year = date%10000;
        int monthAndDay = date/10000;
        modDate = (year * 10000) + monthAndDay;
    }
    return modDate;
   
    
        
}

void card::print()
{
    cout << "_______________________________" << endl;
    cout << "| " << institution << endl;
    cout << "| \t name: " <<  name << endl;
    cout << "| \t exp: " << date << endl;
}

