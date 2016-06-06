/*
Name: Bradley Cookson
Date: 6/6/2016
Description: This program finds the sum of all multiples of 3 or 5 that are less than 1000.
 */

#include <iostream>
using namespace std;

int main() {
    // Variables
    int x, total = 0;
    
    // Loop for calculating the sum
    for (x = 1; x < 1000; x++) {
        if (x % 3 == 0 || x % 5 == 0) {
            total += x;
        }
    }
    
    // Output
    cout << "The sum of all natural numbers less than 1000 that are multiples of 3 or 5 is " <<  total << "." << endl;
    
    // End of the program
    return 0;
}
