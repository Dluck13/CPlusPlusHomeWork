/*
Student Name: Dimitri Luck
Program Description: Guessing Game
Date Submitted: 04/24/2023
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    cout << "Welcome to the Guessing Game 1.0!\n"; // display welcome message
    bool play_again = true;
    
    while (play_again) // main loop to keep playing game
    {
        srand(time(NULL));  // initialize random seed
        
        // print game instructions
        cout << "Choose a game level:\n";
        cout << "1. Easy 1-10\n";
        cout << "2. Medium 1-100\n";
        cout << "0. Quit game\n";
        cout << "Enter your choice (0, 1, or 2): ";
        
        int choice;
        cin >> choice;
        
        if (choice == 0) // quit option selected
        {
            cout << "Thank you for playing the guessing game!\n"; // display exit message
            return 0;
        }
        
        int max_num;
        if (choice == 1)
        {
            max_num = 10;
        }
        else if (choice == 2)
        {
            max_num = 100;
        }
        else // invalid option selected
        {
            cout << "Invalid choice. Please enter a valid option.\n";
            continue; // go back to the start of the loop
        }
        
        int secret_num = rand() % max_num + 1; // generate random number
        int guess;
        int num_guesses = 5;
        int guess_count = 0;
        
        cout << "I'm thinking of a number between 1 and " << max_num << ".\n";
        
        while (num_guesses > 0) // loop for guessing
        {
            cout << "You have " << num_guesses << " guesses left.\n";
            cout << "Enter your guess: ";
            cin >> guess;
            
            guess_count++;
            
            if (guess == secret_num) // correct guess
            {
                if (guess_count == 1) // output message for guessing on first try
                {
                    cout << "Congratulations! You guessed the number in 1 try.\n";
                }
                else // output message for guessing with multiple tries
                {
                    cout << "Congratulations! You guessed the number in " << guess_count << " tries.\n";
                }
                break; // exit the loop
            }
            else if (guess < secret_num) // guess is too low
            {
                cout << "Your guess is too low.\n";
            }
            else // guess is too high
            {
                cout << "Your guess is too high.\n";
            }
            
            num_guesses--;
        }
        
        if (num_guesses == 0) // ran out of guesses
        {
            cout << "Sorry, you didn't guess the number. The number was " << secret_num << ".\n";
        }
        
        cout << "Do you want to play again? (y/n) ";
        char play_again_choice;
        cin >> play_again_choice;
        
        if (play_again_choice == 'n' || play_again_choice == 'N') // user does not want to play again
        {
            play_again = false;
        }
    }
    
    cout << "Thanks for playing the Guessing Game 1.0!\n"; // display exit message
    return 0;
}
