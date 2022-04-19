// Copyright (c) 2022 Alex De Meo All rights reserved
//
// Created By: Alex De Meo
// Date: 04s//22
// Description: Gets a number from user, then loops through untik it reaches
// the number. Also calculates the sum of every number within

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    // Initializing variables
    string uNum;
    int loopNum = 0, loopSum = 0, numInt;

    cout << "Enter a positive number: ";
    cin >> uNum;

    try {
        // converting to int
        numInt = stoi(uNum);

        // only execute if condition is met
        if (numInt > 0) {
            // loop is used to go through each number and add to sum
            while (loopNum < numInt) {
                // adds one to the loop counter
                loopNum += 1;
                cout << loopNum << " times through loop." << endl;
                // update sum
                loopSum += loopNum;
            }

            cout << "The sum of the numbers between 0-" << numInt <<
            " is " << loopSum;

        } else {
            cout << "Invalid Input";
        }
    } catch (...) {
        cout << "Invalid Input";
    }
}
