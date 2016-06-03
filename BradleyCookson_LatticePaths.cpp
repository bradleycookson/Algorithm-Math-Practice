/*
 Name: Bradley Cookson
 Date: 5/10/16
 Description: This command line program calculates the number of paths through an n*n grid where 1 <= n <= 15 grid starting from the top left postion and ending at the bottom right position.  The user will input n and the
     program will output the number of lattice paths.
 */

#include <iostream>

using namespace std;

// Function Prototypes
double factorial(double x);
double combinations(double n);

int main()
{
    // Variables
    double input;
    
    do {
        // User input
        cout << "Please enter an integer value between 1 and 15 to select the size of your n*n grid." << endl;
        cin >> input;
        
        if (input < 1 || input > 15) {
            cout << "That is an invalid entry.  Make sure that you input a value between 1 and 15." << endl;
            cout << " " << endl;
        }
        
    } while (input < 1 || input > 15);
    
    // Output
    cout << " " << endl;
    cout << "There are " << combinations(input) << " routes from the top left corner to the bottom right corner of a " << input << "*" << input << " grid." << endl;
}

// Recursive function for calculating factorials
double factorial(double x) {
    if (x > 1) {
        return (x * factorial(x-1));
    } else {
        return 1;
    }
}

// Function for the calculation of combinations
double combinations(double inInput) {
    
    if (inInput >= 2) {
        double n = 2 * inInput;
        double y = inInput;
        return factorial(n)/(factorial(y) * factorial(n-y));
    } else if (inInput == 1) {
        return 2;
    } else {
        return 0;
    }
}

