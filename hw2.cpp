//
//  hw2.cpp
//  Pic10B HW2
//
//  Created by Michaella Baltazar on 10/24/19.
//  Copyright © 2019 Michaella Baltazar. All rights reserved.
//

#include <stdio.h>
#include "card.hpp"
#include "idcard.hpp"
#include "bankcard.hpp"
#include <string>
#include <iostream>
#include <vector>

using namespace std;


vector<card*> cards;

void caseChoice(int choices)
{
    string institution= "";
    string name = "";
    int expiration = 0;
    int idNum = 0;
    int dob = 0;
    int accountNum = 0;
    int securityCode = 0;
    card* temp = nullptr;
    switch (choices)
    {
        case 1:
            cout << "\n" << "Institution: ";
            cin >> institution;
            cout << "Card holder name: ";
            cin >> name;
            cout << "Expiration date mmddyyyy (0 if none listed): ";
            cin >> expiration;
            temp = new card(institution, name, expiration);
            cards.push_back(temp);
            break;
        case 2:
            cout << "\n" << "Institution: ";
            cin >> institution;
            cout << "Card holder name: ";
            cin >> name;
            cout << "Expiration date mmddyyyy (0 if none listed): ";
            cin >> expiration;
            cout << "ID number: ";
            cin >> idNum;
            cout << "DOB mmddyyyy (0 if none listed): ";
            cin >> dob;
            temp = new idcard(institution, name, expiration, idNum, dob);
            cards.push_back(temp);
            break;
        case 3:
            cout << "\n" << "Institution: ";
            cin >> institution;
            cout << "Card holder name: ";
            cin >> name;
            cout << "Expiration date mmddyyyy (0 if none listed): ";
            cin >> expiration;
            cout << "Account number: ";
            cin >> accountNum;
            cout << "Card security code: ";
            cin >> securityCode;
            temp = new bankcard(institution, name, expiration, accountNum, securityCode);
            cards.push_back(temp);
            break;
        case 0:
            break;
    }
}

void bubbleSort()
{
    card* temp = nullptr;
    for (int i = 0; i < cards.size(); i++)
    {
        for (int j = 0; j < cards.size()-1; j++)
        {
            if (cards[j]->getExpiration() > cards[j+1]->getExpiration())
            {
                temp = cards[j];
                cards[j] = cards[j+1];
                cards[j+1] = temp;
            }
        }
    }
}

int main()
{
    cout << "*********************" << endl;
    cout << "*  Wallet Printer!  *" << endl;
    cout << "*********************" << endl;
    cout << "\n" << "Print cards by selecting the type (any other key when done) :"  << endl;
    cout << "\n" << "1. Basic card" << endl;
    cout << "2. ID Card" << endl;
    cout << "3. Bank Card" << endl;
    int input;
    cin >> input;
    if (!cin)
        return 0;                 // input is not 1, 2, or 3... quit
    else if (input != 1 && input != 2 && input != 3)
        return 0;                 // input is not 1, 2, or 3... quit
    while (input == 1 ||  input == 2 || input == 3)
    {
        caseChoice(input);
        cout << "\n" << "Next card option: ";
        cin >> input;
    }
    bubbleSort();
    for (int i = 0; i < cards.size(); i++)
    {
        cards[i]->print();
    }
}


