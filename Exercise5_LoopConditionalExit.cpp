/*
    ICS 4111: Embedded Systems & IoT
    Practical Exercise 1: C++ Programming & Data Structures Refresher
    
    Exercise 5: Loop with Conditional Exit
    
    Description: This program implements the following pseudocode using a do-while loop.
    It demonstrates a REPEAT...UNTIL loop structure which executes at least once
    before checking the condition.
    
    Pseudocode:
    BEGIN 
        SET x TO 0, y TO 20
        REPEAT 
            SUBTRACT 4 FROM y 
            ADD 2/y TO x 
        UNTIL 
            y IS LESS THAN 6 
        DISPLAY x 
    END 
*/

#include <iostream>
using namespace std;

int main() {
    // Initialize variables as per pseudocode
    double x = 0;      // Initialize x to 0
    double y = 20;     // Initialize y to 20
    
    // Use a do-while loop to implement the REPEAT...UNTIL logic
    // The do-while loop executes at least once, then checks the condition
    do {
        y = y - 4;           // SUBTRACT 4 FROM y
        x = x + (2.0 / y);   // ADD 2/y TO x (using floating point division)
        
        // Display the current values for debugging purposes
        cout << "y = " << y << ", x = " << x << endl;
    } while (y >= 6);         // REPEAT UNTIL y IS LESS THAN 6
    
    // Display the final value of x
    cout << "\nFinal value of x: " << x << endl;
    
    return 0;
}
