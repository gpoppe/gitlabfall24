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

void Room26FindTheKey();



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
				puts("room6");
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
// camila ramirez mendoza
				puts("room26");
				Room26FindTheKey();
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

void Room26FindTheKey()
{
	int tries = 5;
	int randomKeys = rand() % 10 + 1;
	int guess;
	int keys[10];
	bool foundKey = false;

	// make random locations
	for (int i = 0; i < 10; i++)
	{
		keys[i] = 0;
	}
	keys[randomKeys - 1] = 1;

	printf("You entered room 27. To enter the next door find the hidden key in one of the boxes.\n");

	printf("You have 5 tries to find the key. Choose a number between 1 and 10.\n");
	// while the user is guessing
	while (guess > 0 && !foundKey)
	{
		printf("\nEnter your choice of box: ");
		scanf("%d", &guess);

		if (guess < 1 || guess > 10)
		{
			printf("You must choose a number between 1 and 10. Try again.\n");
			continue;
		}

		if (keys[guess - 1] == 1)
		{
			printf("You got the right box at %d! Congrats!\n", guess);
			foundKey = true;	
		}

		else
		{
			printf("There was no key in the box %d. Try Agin\n", guess);
		}

		tries--;

		if (!foundKey && tries > 0)
		{
			printf("You have %d tries remaining.\n", tries);
		}
	}

	if (!foundKey)
	{
		printf("You ran out of tries. The key was in box %d.\n", randomKeys);
	}
}
