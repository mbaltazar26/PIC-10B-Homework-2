//
//  idcard.hpp
//  Pic10B HW2
//
//  Created by Michaella Baltazar on 10/24/19.
//  Copyright © 2019 Michaella Baltazar. All rights reserved.
//

#ifndef idcard_hpp
#define idcard_hpp
#include <string>
#include "card.hpp"
#include <stdio.h>

class idcard: public card
{
public:
    idcard();
    idcard(string institutionName, string holderName, int expirationDate, int id, int dob);
    int getIDNumber();
    int getDOB();
    void print();
private:
    int idNumber;
    int  dateOfBirth;
};

#endif /* idcard_hpp */
