/*
    ICS 4111: Embedded Systems & IoT
    Practical Exercise 1: C++ Programming & Data Structures Refresher
    
    Exercise 3: Square Area and Perimeter with Functions
    
    Description: This program uses functions to compute the area and perimeter of a square.
    The program asks the user to enter the side length and displays both area and perimeter.
    
    Formulas:
    - Area = s²
    - Perimeter = 4s
*/

#include <iostream>
using namespace std;

// Function to calculate the area of a square
// Parameters: side - the side length of the square
// Returns: the area (side * side)
double calculateArea(double side) {
    return side * side;
}

// Function to calculate the perimeter of a square
// Parameters: side - the side length of the square
// Returns: the perimeter (4 * side)
double calculatePerimeter(double side) {
    return 4 * side;
}

int main() {
    // Declare variable to store the side length
    double sideLength;
    
    // Prompt the user to enter the side length
    cout << "Enter the side length of the square: ";
    cin >> sideLength;
    
    // Check for valid input (side length should be positive)
    if (sideLength <= 0) {
        cout << "Error: Side length must be positive!" << endl;
        return 1;
    }
    
    // Calculate area and perimeter using function calls
    double area = calculateArea(sideLength);
    double perimeter = calculatePerimeter(sideLength);
    
    // Display the results
    cout << "\nSquare with side length " << sideLength << ":" << endl;
    cout << "Area: " << area << " square units" << endl;
    cout << "Perimeter: " << perimeter << " units" << endl;
    
    return 0;
}
