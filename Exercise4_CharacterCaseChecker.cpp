/*
    ICS 4111: Embedded Systems & IoT
    Practical Exercise 1: C++ Programming & Data Structures Refresher
    
    Exercise 4: Character Case Checker
    
    Description: This program uses functions to determine whether a character 
    input by the user is uppercase or lowercase.
    Uses the isupper() and islower() functions from the cctype library.
    
    Library: cctype (for character classification functions)
*/

#include <iostream>
#include <cctype>
using namespace std;

// Function to check and display the case of a character
// Parameters: ch - the character to check
// Returns: void (displays result to console)
void checkCharacterCase(char ch) {
    // Check if the character is an uppercase letter
    if (isupper(ch)) {
        cout << "'" << ch << "' is an UPPERCASE letter." << endl;
    }
    // Check if the character is a lowercase letter
    else if (islower(ch)) {
        cout << "'" << ch << "' is a LOWERCASE letter." << endl;
    }
    // If it's neither uppercase nor lowercase
    else {
        cout << "'" << ch << "' is neither uppercase nor lowercase (not a letter)." << endl;
    }
}

int main() {
    // Declare variable to store the character
    char character;
    
    // Prompt the user to enter a character
    cout << "Enter a character: ";
    cin >> character;
    
    // Call the function to check the character case
    checkCharacterCase(character);
    
    return 0;
}
