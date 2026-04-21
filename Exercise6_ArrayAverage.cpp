/*
    ICS 4111: Embedded Systems & IoT
    Practical Exercise 1: C++ Programming & Data Structures Refresher
    
    Exercise 6: Array Average Calculator
    
    Description: This program uses a loop to allow users to continuously input 5 values
    into an array, then calculates and displays the average of the values.
    
    Tasks:
    1. Uses a loop for a user to continually input 5 values to populate an array
    2. Calculates and displays the average of the values input into the array
*/

#include <iostream>
using namespace std;

int main() {
    // Define the array size as a constant
    const int ARRAY_SIZE = 5;
    
    // Declare an array to store 5 values
    double values[ARRAY_SIZE];
    
    // Use a for loop to get 5 values from the user
    cout << "Enter 5 numerical values:" << endl;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << "Enter value " << (i + 1) << ": ";
        cin >> values[i];  // Store the input in the array
    }
    
    // Calculate the sum of all values in the array
    double sum = 0;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        sum = sum + values[i];  // Add each value to the sum
    }
    
    // Calculate the average by dividing the sum by the number of values
    double average = sum / ARRAY_SIZE;
    
    // Display the values, sum, and average
    cout << "\nValues entered: ";
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << values[i] << " ";
    }
    cout << endl;
    
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    
    return 0;
}
