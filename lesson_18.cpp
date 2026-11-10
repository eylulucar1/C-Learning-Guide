#include <iostream>
using namespace std;

int main()
{
    // A do-while loop is an "exit-controlled" loop.
    // Unlike a standard 'while' loop, it executes the code block FIRST, 
    // and checks the condition AFTERWARD. 
    // This means the loop is guaranteed to run at least once.

    int secretNumber = 7; // The target number the user needs to guess
    int userGuess;        // Variable to store the user's input

    do 
    {
        // 1. This block executes first, before checking any condition.
        cout << "Guess the secret number (between 1 and 10): ";
        cin >> userGuess; // Read input from the user

        // Provide feedback based on the user's input
        if (userGuess != secretNumber) 
        {
            cout << "Wrong guess! Try again.\n\n";
        }

    } while (userGuess != secretNumber); // 2. The condition is checked at the end.
    // If 'userGuess != secretNumber' is TRUE, the loop repeats from 'do'.
    // If it is FALSE (the user guessed 7), the loop terminates.
    // Note: Do not forget the semicolon (;) right after the while condition!

    // 3. Execution continues here once the loop ends.
    cout << "Congratulations! You found the secret number: " << secretNumber << endl;

    return 0;
}