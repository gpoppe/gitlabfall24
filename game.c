//contributors
//GP
//
//



#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

//place function prototypes here

void Detectivegame();
int randomOutcome();
void displayClues(char *clues[], int cluesFound);

	int main(int argc, char *argv[])
{
	int choice = 0;
	char name[30] = "bob";
	srand(time(NULL));
	
	printf("Please enter your name: ");
	scanf("%s",name);
	printf("Hello %s welcome to the RPG Game!\n",name);
	while(choice != 99)
	{
		puts("You find yourself in a dark room and you are not sure how you got here.");
		puts("As you look around you see the room has 55 doors, each labeled with a number.");
		puts("The room starts filling with water and you must choose a door to open or you will likely drown. you may quit anytime by selecting option 99.");
		puts("What door do you choose?");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				puts("room1");
//nathan 

				break;
			}
			case 2:
			{
				puts("room2");
				break;
			}
			case 3:
			{
				puts("room3");
				break;
			}
			case 4:
			{
				puts("room4");
				break;
			}
			case 5:
			{
				puts("room5");
				//Sathwika
				Detectivegame();
				break;
			}
			case 6:
			{
				puts("room6");
				break;
			}
			case 7:
			{
				puts("room7");
				break;
			}
			case 8:
			{
				puts("room8");
				break;
			}
			case 9:
			{
				puts("room9");
				break;
			}
			case 10:
			{
				puts("room10");
				break;
			}
			case 11:
			{
				puts("room11");
				break;
			}
			case 12:
			{
				puts("room12");
				break;
			}
			case 13:
			{
				puts("room13");
				break;
			}
			case 14:
			{
				puts("room14");
				break;
			}
			case 15:
			{
				puts("room15");
				break;
			}
			case 16:
			{
				puts("room16");
				break;
			}
			case 17:
			{
				puts("room17");
				break;
			}
			case 18:
			{
				puts("room18");
				break;
			}
			case 19:
			{
				puts("room19");
				break;
			}
			case 20:
			{
				puts("room20");
				break;
			}
			case 21:
			{
				puts("room21");
				break;
			}
			case 22:
			{
				puts("room22");
				break;
			}
			case 23:
			{
				puts("room23");
				break;
			}
			case 24:
			{
				puts("room24");
				break;
			}
			case 25:
			{
				puts("room25");
				break;
			}
			case 26:
			{
				puts("room26");
				break;
			}
			case 27:
			{
				puts("room27");
				break;
			}
			case 28:
			{
				puts("room28");
				break;
			}
			case 29:
			{
				puts("room29");
				break;
			}
			case 30:
			{
				puts("room30");
				break;
			}
			case 31:
			{
				puts("room31");
				break;
			}
			case 32:
			{
				puts("room32");
				break;
			}
			case 33:
			{
				puts("room33");
				break;
			}
			case 34:
			{
				puts("room35");
				break;
			}
			case 36:
			{
				puts("room36");
				break;
			}
			case 37:
			{
				puts("room37");
				break;
			}
			case 38:
			{
				puts("room38");
				break;
			}
			case 39:
			{
				puts("room39");
				break;
			}
			case 40:
			{
				puts("room40");
				break;
			}
			case 41:
			{
				puts("room41");
				break;
			}
			case 42:
			{
				puts("room42");
				break;
			}
			case 43:
			{
				puts("room43");
				break;
			}
			case 44:
			{
				puts("room44");
				break;
			}
			case 45:
			{
				puts("room45");
				break;
			}
			case 46:
			{
				puts("room46");
				break;
			}
			case 47:
			{
				puts("room47");
				break;
			}
			case 48:
			{
				puts("room48");
				break;
			}
			case 49:
			{
				puts("room49");
				break;
			}
			case 50:
			{
				puts("room50");
				break;
			}
			case 51:
			{
				puts("room51");
				break;
			}
			case 52:
			{
				puts("room52");
				break;
			}
			case 53:
			{
				puts("room53");
				break;
			}
			case 54:
			{
				puts("room54");
				break;
			}
			case 55:
			{
				puts("room55");
				break;
			}
			case 99:
			{
				puts("You have escaped");
				break;
			}
			default:
			{
				puts("invalid choice");
			}
		}
	}
	puts("Game Over");
	return EXIT_SUCCESS;
}

//place functions here
void Detectivegame() {
    srand(time(NULL));
    int choice;
    int gameOver = 0;
    int cluesFound = 0;
    int mysterySolved = 0;
    char *clues[5];  

    printf("Welcome to the Detective Mystery Game!\n");
    printf("You are a detective solving a robbery case that went terribly wrong.\n");
    printf("Your goal is to investigate, find clues, and solve the mystery before the case goes cold.\n");
    printf("Good luck, Detective!\n");

    while (!gameOver) {
        puts("\nWhat would you like to do?");
        puts("1. Investigate the crime scene");
        puts("2. Interview a witness");
        puts("3. Analyze evidence in the lab");
        puts("4. Follow a suspicious lead");
        puts("5. Close the case");
        puts("Enter your choice:");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nYou arrive at the crime scene. It looks like a robbery gone wrong.\n");
                int sceneClue = randomOutcome();
                if (sceneClue == 0) {
                    printf("You find a fingerprint on the window ledge. It's a lead!\n");
                    clues[cluesFound] = "Fingerprint on the window ledge";
                    cluesFound++;
                } else {
                    printf("You search the area but find nothing useful.\n");
                }
                break;

            case 2:
                printf("\nYou interview a witness.\n");
                int witnessClue = randomOutcome();
                if (witnessClue == 0) {
                    printf("The witness remembers seeing a red car near the scene!\n");
                    clues[cluesFound] = "Witness saw a red car";
                    cluesFound++;
                } else {
                    printf("The witness is too shaken to recall any helpful details.\n");
                }
                break;

            case 3:
                printf("\nYou head to the forensics lab to analyze the evidence.\n");
                int labClue = randomOutcome();
                if (labClue == 0) {
                    printf("The fingerprint matches a known criminal from previous cases!\n");
                    clues[cluesFound] = "Fingerprint matched a known criminal";
                    cluesFound++;
                } else {
                    printf("The evidence is inconclusive. You'll need more clues to make a breakthrough.\n");
                }
                break;

            case 4:
                printf("\nYou decide to follow up on the lead about the red car.\n");
                int leadOutcome = randomOutcome();
                if (leadOutcome == 0) {
                    printf("The car is traced back to a warehouse in the industrial district. You find more evidence linking it to the suspect!\n");
                    clues[cluesFound] = "Red car traced to warehouse";
                    cluesFound++;
                } else {
                    printf("The lead goes cold. No further information is uncovered.\n");
                }
                break;

            case 5:
                if (cluesFound >= 3) {
                    printf("\nYou have gathered enough clues to close the case.\n");
                    printf("The criminal has been apprehended, and the case is now solved. Great job, Detective!\n");
                    mysterySolved = 1;
                } else {
                    printf("You don't have enough evidence to close the case. Keep investigating.\n");
                    displayClues(clues, cluesFound);
                }
                break;

            default:
                printf("\nInvalid choice. Please try again.\n");
                break;
        }

        if (mysterySolved) {
            gameOver = 1;
        }
    }
}

int randomOutcome() {
    return rand() % 2;
}

void displayClues(char *clues[], int cluesFound) {
    printf("\nClues collected so far:\n");
    if (cluesFound == 0) {
        printf("No clues found yet. Keep investigating!\n");
    } else {
        for (int i = 0; i < cluesFound; i++) {
            printf("- %s\n", clues[i]);
        }
    }
}
