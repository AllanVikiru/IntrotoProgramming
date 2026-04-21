/*
    ICS 4111: Embedded Systems & IoT
    Practical Exercise 1: C++ Programming & Data Structures Refresher
    
    Exercise 2: Sphere Volume Calculator
    
    Description: This program asks the user to input the radius and calculates 
    the volume of a sphere using the formula V = (4/3)πr³.
    Uses the inbuilt exponential function pow() to compute r³.
    
    Formula: V = (4/3) * π * r³
    Libraries: cmath (for M_PI constant and pow() function)
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Declare variable to store the radius
    double radius;
    
    // Prompt the user to enter the radius
    cout << "Enter the radius of the sphere: ";
    cin >> radius;
    
    // Calculate the volume using the formula V = (4/3) * pi * r^3
    // pow(radius, 3) calculates radius cubed
    double volume = (4.0 / 3.0) * M_PI * pow(radius, 3);
    
    // Display the result with appropriate formatting
    cout << "Volume of the sphere with radius " << radius << " is: " << volume << " cubic units" << endl;
    
    return 0;
}
