//
//  bankcard.cpp
//  Pic10B HW2
//
//  Created by Michaella Baltazar on 10/24/19.
//  Copyright © 2019 Michaella Baltazar. All rights reserved.
//

#include "bankcard.hpp"
#include <string>

using namespace std;

bankcard::bankcard()
:card()
{
    pinCode = 0;
    accountNum = 0;
    
}
bankcard::bankcard(string institutionName, string holderName, int expirationDate, int accountNumber, int pinNum)
:card(institutionName, holderName, expirationDate)
{
    accountNum = accountNumber;
    pinCode = pinNum;
}

int bankcard::getAccount()
{
    return accountNum;
}

int bankcard::getPin()
{
    return pinCode;
}

void bankcard::print()
{
    cout << "_______________________________" << endl;
    cout << "| " << institution << endl;
    cout << "| \t name: " <<  name << endl;
    cout << "| \t exp: " << date << endl;
    cout << "| " << endl;
    cout << "| \t Account#: " << accountNum << endl;
    cout << "| \t CSC: " << pinCode << endl;
}


