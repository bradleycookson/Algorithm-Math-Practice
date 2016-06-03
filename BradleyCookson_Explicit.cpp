/*
Name: Bradley Cookson
Date: 4-18-16
Description: This program takes in two coefficiencts for a degree 2 recurrence relation and two initial conditions a0 and a1.  It returns the explicit formula for the sequence.
*/

// Header File
#include <iostream>
#include <cmath>

// Namespace Line
using namespace std;

// Main Function
int main()
{
    // Variables
    double c, d, a0, a1, u, v, s1, s2, check, discriminant;

    do {
    // User Input
    cout << "The purpose of this program is to give you the explicit formual of the given degree 2 recurrence relation." << endl;
    cout << "Please enter the value for c: " << endl;
    cin >> c;
    cout << "Please enter the value for d: " << endl;
    cin >> d;
    cout << "Please enter the value for the initial condition, a0: " << endl;
    cin >> a0;
    cout << "Please enter the value for the second condition, a1: " << endl;
    cin >> a1;
    // Input Validation
    check = (c*c)+(4*d);
        
        if (check < 0)
        {
            cout << "That is an invalid entry. Please try again." << endl;
        }
        
    } while (check < 0);
    
    // Root Finder
    discriminant = (c*c)-(4*d);
    
    if (discriminant > 0)
    {
        s1 = (-c + sqrt(discriminant)) / 2;
        s2 = (-c - sqrt(discriminant)) / 2;
    } else if (discriminant == 0)
    {
        s1 = (-c + sqrt(discriminant)) / 2;
    }
    
    // Find u and v
    u = (a1-(a0*s2))/(s1-s2);
    v = (a1-(a0*s1))/(s2-s1);
    
    // Output
    if (discriminant > 0)
    {
        cout << "Explicit Formula: an = " << u << " * " << s1 << "^n + " << v << " * " << s2 << "^n" << endl;
    } else if (discriminant < 0)
    {
        cout << "Negative Discriminant" << endl;
    } else if (discriminant == 0)
    {
        cout << "Explicit Formula: an = " << u << " * " << s1 << "^n + " << v << " * n * " << s1 << "^n" << endl;
    }
    // End of program
    return 0;
}



