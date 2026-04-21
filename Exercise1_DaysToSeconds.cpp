/*
    ICS 4111: Embedded Systems & IoT
    Practical Exercise 1: C++ Programming & Data Structures Refresher
    
    Exercise 1: Days to Seconds Conversion
    
    Description: This program asks the user for the number of days and prints out
    the number of seconds in the number of days given.
    
    Formula: Total Seconds = Days × 86400 (where 86400 is the number of seconds in one day)
*/

#include <iostream>
using namespace std;

int main() {
    // Declare variable to store the number of days
    int days;
    
    // Prompt the user to enter the number of days
    cout << "Enter the number of days: ";
    cin >> days;
    
    // Calculate the number of seconds (1 day = 86400 seconds)
    long long totalSeconds = days * 86400;
    
    // Display the result
    cout << "Number of seconds in " << days << " days: " << totalSeconds << " seconds" << endl;
    
    return 0;
}
