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

void mysteryItemGame();



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
//raquel
				break;
			}
			case 3:
			{
				puts("room3");
				//Nestor Hernandez
				break;
			}
			case 4:
			{
//adonay				
				puts("room4");				break;
			}
			case 5:
			{
				puts("room5");
				//Sathwika
				break;
			}
			case 6:
			{
				//anushka
				puts("Welcome to the Mystery Item Game!");
				mysteryItemGame();
				break;
			}


			case 7:

			{

// Alexis Jennar Gonzaga`s Boss Room

				puts("room7");
				break;

			}


			case 8:
			{
			//yyong 
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
//Angel
				puts("room10");
				break;
			}
			
			case 11:
			{
				puts("room11");
//Cecilia
				break;
			}
			case 12:
			{
				puts("room12");
//DanielR.
				break;
			}
			case 13:
			{
				puts("room13");
//sidney
				break;
			}
			case 14:
			{
				puts("room14");
// Omar Flores
				printf("This is Omar's Room");
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
//Alexis Gutierrez
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
//Esteban Nino
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
//ivan
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

void mysteryItemGame()
{
	char items[5][20] = {"treasure key", "magic potion", "ancient box", "old map", "fortune coin"};
	int bagCapacity = 3;
	int bagCount = 0;

	while(1)
	{
		puts("You find yourself in a room filled with dust and cobwebs.");
		puts("As you look around you see a book shelf with a few books and a few empty shelves.");
		int randomEvent = rand() % 5 + 1; 
		int randomItem = rand() % 5 + 1; 
		switch (randomEvent)
		{
			case 1:
				printf("You found a %s hidden in a crack of the book shelf!\n", items[randomItem - 1]);
				break;
			case 2:
				printf("A %s glints in the shadows!\n", items[randomItem - 1]);
				break;
			case 3:
				printf("You discover a %s beneath some dust!\n", items[randomItem - 1]);
				break;
			case 4:
				printf("You notice a %s tucked away behind a loose brick!\n", items[randomItem - 1]);
				break;
			default:
				printf("Nothing interesting happens this time.\n");
				break;
		}

		char choice;

		if (randomEvent != 5) 
		{
			puts("Would you like to keep the item? (y/n)");
			
			scanf(" %c", &choice);
			if(choice == 'y')
			{
				if(bagCount < bagCapacity)
				{
					printf("You put the %s in your bag.\n", items[randomItem - 1]);
					bagCount++;
				}
				else
				{
					puts("Your bag is full! Would you like to empty your bag and keep the item? (y/n)");
					scanf(" %c", &choice);
					if(choice == 'y')
					{
						puts("You empty your bag and put the new item in.");
						bagCount = 1; 
					}
					else
					{
						puts("You discard the item.");
					}
				}
			}
			else
			{
				puts("You leave the item behind.");
			}
		}
		

		puts("Would you like to search the room again? (y/n)");
		scanf(" %c", &choice);
		if(choice != 'y')
		{
			puts("You notice two more paths to explore:");
			puts("1. A narrow staircase leading downwards.");
			puts("2. A hidden door behind the bookshelf.");
			puts("Which path do you choose? (1/2)");
			int roomChoice;
			scanf("%d", &roomChoice);
			if (roomChoice == 1)
			{
				puts("You descend the staircase and find a hidden chamber.");
				puts("It leads back to the room with the 55 doors.");
				puts("Thanks for playing!");
				break;
			}
			else if (roomChoice == 2)
			{
				puts("You open the hidden door and discover a secret passage.");
				puts("It leads to a room with a treasure chest.");
				puts("You open the chest and find a golden crown!");
				puts("Congratulations!");
				break;
			}
			else
			{
				puts("Invalid choice, you stay put.");
			}
		}
	}

	
}

