//
//  bankcard.hpp
//  Pic10B HW2
//
//  Created by Michaella Baltazar on 10/24/19.
//  Copyright © 2019 Michaella Baltazar. All rights reserved.
//


#ifndef bankcard_hpp
#define bankcard_hpp
#include "card.hpp"
#include <stdio.h>
#include <string>

class bankcard: public card
{
public:
    bankcard();
    bankcard(string institutionName, string holderName, int expirationDate, int accountNumber, int pinNum);
    int getAccount();
    int getPin();
    void print();
private:
    int pinCode;
    int accountNum;
};

#endif


