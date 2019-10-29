//
//  idcard.cpp
//  Pic10B HW2
//
//  Created by Michaella Baltazar on 10/24/19.
//  Copyright © 2019 Michaella Baltazar. All rights reserved.
//

#include "idcard.hpp"
#include "card.hpp"

using namespace std;

idcard::idcard()
: card()
{
    idNumber = 0;
    dateOfBirth = 0;
}

idcard::idcard(string institutionName, string holderName, int expirationDate, int id, int dob)
: card (institutionName, holderName, expirationDate)
{
    idNumber = id;
    dateOfBirth = dob;
}

int idcard::getIDNumber()
{
    return idNumber;
}

int idcard::getDOB()
{
    return dateOfBirth;
}

void idcard::print()
{
    cout << "_______________________________" << endl;
    cout << "| " << institution << endl;
    cout << "| \t name: " <<  name << endl;
    cout << "|  \t exp: " << date << endl;
    cout << "|" << endl;
    cout << "| \t ID#: " <<  idNumber << endl;
    cout << "| \t DOB: " << dateOfBirth << endl;
}
