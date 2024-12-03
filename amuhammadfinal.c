#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function prototype
void displaySummary(const char* choice);

int main() {
    // Array of university options
    const char* universities[] = {
        "Cal State Dominguez Hills",
        "Cal State Northridge",
        "Cal State Long Beach",
        "Cal State Fullerton",
        "Cal State Los Angeles"
    };

    int userChoice;
    char playAgain;
    srand(time(0)); // Seed for random number generator

    printf("Welcome to the Choose Your California State University Game!\n");

    do {
        printf("\nHere are your options:\n");
        for (int i = 0; i < 5; i++) {
            printf("%d. %s\n", i + 1, universities[i]);
        }

        printf("\nEnter the number of your choice (1-5): ");
        scanf("%d", &userChoice);

        if (userChoice >= 1 && userChoice <= 5) {
            printf("\nYou chose: %s\n", universities[userChoice - 1]);
            displaySummary(universities[userChoice - 1]);
        } else {
            printf("\nInvalid choice. Please select a number between 1 and 5.\n");
        }

        // Random event
        int randomEvent = rand() % 2; // Random number: 0 or 1
        if (randomEvent == 0) {
            printf("\nRandom Event: You received a scholarship to %s!\n", universities[userChoice - 1]);
        } else {
            printf("\nRandom Event: You met the university president at %s!\n", universities[userChoice - 1]);
        }

        printf("\nWould you like to choose again? (y/n): ");
        scanf(" %c", &playAgain);
    } while (playAgain == 'y' || playAgain == 'Y');

    printf("\nThank you for playing! Goodbye!\n");
    return 0;
}

// Function to display a summary
void displaySummary(const char* choice) {
    printf("\nSummary: %s is a great choice with excellent programs and campus life!\n", choice);
}
