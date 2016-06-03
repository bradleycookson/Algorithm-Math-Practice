/*
Name: Bradley Cookson
Date: 2-5-16
Description: This program takes any two integers as input from the user and returns their greatest common
             divisor.
*/

// Header File
#include <iostream>

// Namespace Line
using namespace std;

// Main Function
int main()
{

    // Variables
    int dividend, divisor, remainder, number1, number2;

    // User Input
    cout << "The purpose of this program is to give you the greatest common divisor of two integers." << endl;
    cout << "Please enter your first integer value: " << endl;
    cin >> number1;
    cout << "Please enter your second integer value: " << endl;
    cin >> number2;

    // Two if statements to check if there is a negative input value
    if (number1 < 0)
    {
        number1 = -number1;
    }

    if (number2 < 0)
    {
        number2 = -number2;
    }

    // Nested conditional to check if either of the two input values are equal to zero or if they are both equal to zero w/ output
    if (number1 == 0 || number2 == 0)
    {
        if (number1 != 0)
        {
            cout << "The greatest common divisor is " << number1 << "." << endl;
        }
        else if (number2 != 0)
        {
            cout << "The greatest common divisor is " << number2 << "." << endl;
        }
        else if (number1 == 0 && number2 == 0)
        {
            cout << "The value is undefined." << endl;
        }
        return 0;
    }

    // Determine which number is the dividend and which is the divisor
    if(number1 > number2)
    {
        dividend = number1;
        divisor = number2;
    }
    else
    {
        dividend = number2;
        divisor = number1;
    }

    // Algorithm
    do
    {
        remainder = dividend % divisor;

        if (remainder != 0)
        {
            dividend = divisor;
            divisor = remainder;
        }

    }
    while (remainder != 0);

    // Final Output
    cout << "The greatest common divisor is " << divisor << "." << endl;

    // End of the program
    return 0;
}
