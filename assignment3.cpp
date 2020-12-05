// copyright (c) 2020 Ahmad All rights reserved
//
// created by Ahmad El-khawaldeh
// created on Nov 2020
// This program will tell the user to insert a number
// from 1-7 then it will tell them what weekday it is

#include <iostream>

using namespace std;

int main() {
    int weekday;

    cout << "Enter weekday day number (1-7) : ";
    cin >> weekday;

    if (weekday == 1) {
        cout << endl << "Sunday";
    } else if (weekday == 2) {
        cout << endl << "Monday";
    } else if (weekday == 3) {
        cout << endl << "Tuesday";
    } else if (weekday == 4) {
        cout << endl << "wedneday";
    } else if (weekday == 5) {
        cout << endl << "Thursady";
    } else if (weekday == 6) {
        cout << endl << "Friday";
    } else if (weekday == 7) {
        cout << endl << "Saturday";
    } else {
        cout << endl << "Please enter weekday number between 1-7.";
    }
  
}
