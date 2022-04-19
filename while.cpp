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
    string u_num;
    int loop_num = 0, loop_sum = 0, numInt;

    cout << "Enter a positive number: ";
    cin >> u_num;

    try {
        // converting to int
        numInt = stoi(u_num);

        // only execute if condition is met
        if (numInt > 0) {
            // loop is used to go through each number and add to sum
            while (loop_num < numInt) {
                // adds one to the loop counter
                loop_num += 1;
                cout << loop_num << " times through loop." << endl;
                // update sum
                loop_sum += loop_num;
            }

            cout << "The sum of the numbers between 0-" << numInt <<
            " is " << loop_sum;

        } else {
            cout << "Invalid Input";
        }
    } catch (...) {
        cout << "Invalid Input";
    }
}
