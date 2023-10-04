//cpp number guessing program.

#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()
using namespace std;

int main() {
    // Seed the random number generator with the current time
   // std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" <<endl;
    cout << "I have selected a number between 1 and 100. Try to guess it." <<endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber) {
           cout << "Too low! Try again." <<endl;
        } else if (guess > secretNumber) {
           cout << "Too high! Try again." <<endl;
        } else {
           cout << "Congratulations! You guessed the number (" << secretNumber << ") in " << attempts << " attempts." << std::endl;
        }
    } while (guess != secretNumber);

}
