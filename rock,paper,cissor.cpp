#include <iostream>
#include <cstdlib> // Required for rand() and srand()
#include <ctime>   // Required for time() to seed the random generator
#include <windows.h>

using namespace std;

// ==========================================
// FUNCTION DECLARATIONS (PROTOTYPES)
// ==========================================
// These tell the compiler that these functions exist and will be defined later.
void showMenu();
char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void determineWinner(char player, char computer);

// ==========================================
// MAIN FUNCTION
// ==========================================
int main() {
    SetConsoleOutputCP(CP_UTF8); 
    
    // Seed the random number generator using the current system time
    srand(static_cast<unsigned int>(time(0)));
    
    char playerChoice;
    char computerChoice;
    char playAgain;

    cout << "====================================\n";
    cout << "   ✊✋✌️  ROCK, PAPER, SCISSORS    \n";
    cout << "====================================\n\n";

    do {
        showMenu();
        playerChoice = getUserChoice();
        computerChoice = getComputerChoice();

        cout << "\nYou chose: ";
        showChoice(playerChoice);

        cout << "Computer chose: ";
        showChoice(computerChoice);

        determineWinner(playerChoice, computerChoice);

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
        cout << "\n";

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing! Goodbye! 👋\n";
    return 0;
}

// ==========================================
// FUNCTION DEFINITIONS
// ==========================================

// Prints the starting options to the console
void showMenu() {
    cout << "Choose one of the following options:\n";
    cout << "------------------------------------\n";
    cout << "r - Rock ✊\n";
    cout << "p - Paper ✋\n";
    cout << "s - Scissors ✌️\n";
    cout << "------------------------------------\n";
}

// Prompts the user, validates their input, and returns their choice
char getUserChoice() {
    char choice;
    do {
        cout << "Enter your choice (r, p, or s): ";
        cin >> choice;
        
        // Convert to lowercase in case they typed capital letters
        choice = tolower(choice); 

        if (choice != 'r' && choice != 'p' && choice != 's') {
            cout << "❌ Invalid input. Please try again.\n";
        }
    } while (choice != 'r' && choice != 'p' && choice != 's');
    
    return choice;
}

// Generates a random choice for the computer and returns it
char getComputerChoice() {
    // rand() % 3 generates a number: 0, 1, or 2
    int num = rand() % 3;

    if (num == 0) return 'r';
    if (num == 1) return 'p';
    return 's'; // if num is 2
}

// Converts the abbreviation ('r', 'p', 's') into a readable string
void showChoice(char choice) {
    if (choice == 'r') cout << "Rock ✊\n";
    else if (choice == 'p') cout << "Paper ✋\n";
    else if (choice == 's') cout << "Scissors ✌️\n";
}

// Compares player choice vs. computer choice and prints the result
void determineWinner(char player, char computer) {
    if (player == computer) {
        cout << "🤝 It's a TIE!\n\n";
        return;
    }

    // Checking winning conditions for the player
    if ((player == 'r' && computer == 's') ||
        (player == 'p' && computer == 'r') ||
        (player == 's' && computer == 'p')) {
        cout << "🎉 YOU WIN!\n\n";
    } else {
        cout << "💻 COMPUTER WINS!\n\n";
    }
}