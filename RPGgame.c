#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function prototypes
void enterDragonCave();
void exploreMysticForest();
void visitMageTower();
void enterTreasureVault();
void fightArena();

int main() {
    int choice;
    int running = 1;

    srand(time(NULL)); // Seed for random number generation

    printf("Welcome to the Anime Fantasy RPG!\n");
    printf("Embark on an adventure filled with magic, dragons, and mystery.\n");

    while (running) {
        printf("\nWhat would you like to do?\n");
        printf("1. Enter the Dragon Cave\n");
        printf("2. Explore the Mystic Forest\n");
        printf("3. Visit the Mage Tower\n");
        printf("4. Enter the Treasure Vault\n");
        printf("5. Fight in the Arena\n");
        printf("6. Exit Game\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enterDragonCave();
                break;
            case 2:
                exploreMysticForest();
                break;
            case 3:
                visitMageTower();
                break;
            case 4:
                enterTreasureVault();
                break;
            case 5:
                fightArena();
                break;
            case 6:
                printf("Thank you for playing the Anime Fantasy RPG. Farewell, adventurer!\n");
                running = 0;
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

void enterDragonCave() {
    printf("\nYou step into the dark, smoky Dragon Cave...\n");
    int dragonStrength = rand() % 100 + 1; // Random dragon strength
    if (dragonStrength > 50) {
        printf("A fierce dragon awakens and challenges you to a duel! Its strength is %d.\n", dragonStrength);
        printf("You manage to escape with a singed cloak. Better luck next time!\n");
    } else {
        printf("The cave is empty, but you find a glowing dragon scale!\n");
    }
}

void exploreMysticForest() {
    printf("\nThe Mystic Forest is lush with glowing trees and magical creatures.\n");
    int magicArray[5] = {10, 20, 30, 40, 50};
    printf("You encounter a magical deer that grants you a blessing of +%d health.\n", magicArray[rand() % 5]);
}

void visitMageTower() {
    printf("\nYou ascend the winding stairs of the Mage Tower.\n");
    printf("The Mage offers you a riddle: Solve it, and you'll receive a powerful spell.\n");
    printf("What is 2 + 2?\nYour answer: ");
    int answer;
    scanf("%d", &answer);
    if (answer == 4) {
        printf("Correct! You receive the 'Flame Burst' spell.\n");
    } else {
        printf("Wrong! The Mage banishes you from the tower.\n");
    }
}

void enterTreasureVault() {
    printf("\nYou unlock the giant doors to the Treasure Vault.\n");
    int treasures[3] = {100, 200, 300};
    printf("You find a chest containing %d gold coins!\n", treasures[rand() % 3]);
}

void fightArena() {
    printf("\nYou step into the arena to face your opponent...\n");
    int playerStrength = rand() % 100 + 1;
    int opponentStrength = rand() % 100 + 1;
    printf("Your strength: %d, Opponent's strength: %d\n", playerStrength, opponentStrength);

    if (playerStrength > opponentStrength) {
        printf("You win the battle and earn a medal of honor!\n");
    } else {
        printf("You are defeated, but your bravery earns you respect.\n");
    }
}
