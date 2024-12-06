//contributors
//GP
//Yyong Taing
//
//Esteban Nino
//Alexis Gutierrez

#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

//place function prototypes here

int equals(int firstNumber, int secondNumber);



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
			  	int choice1,enterDoor,guess,i,firstNumber,secondNumber,addNums = 0;
				int lookBackCounter = 1;
				int numPerson;
				int game = 1;
				int attempt = 4;
				int listNum[4] = {1, 2, 3, 4};
				//srand(time(NULL));
				puts("room17");
				printf("\n''THE DOOR CREEPS OPEN''\n");
				printf("Go through the door? Enter 1 for yes/ 2 for no: ");
				scanf("%d",&choice1);
			//CHOICE1
				if (choice1 == 2)
				{
					//printf("Go through door? Enter 1 for yes/ 2 for no: ");
					//scanf("%d", &choice1);
					while (choice1 != 1)
					{
						//printf("Go through door? Enter 1 for yes/ 2 for no: ");
						//scanf("%d",&choice1);
						if (lookBackCounter == 1)
						{

							lookBackCounter++;
							printf("'You turn back and notice a creepy shadow'\n");
							printf("Enter door? Enter 1 for yes/ 2 for no: ");
							scanf("%d", &choice1);

						}
						else if (lookBackCounter == 2)
						{
							lookBackCounter++;
							printf("'You turn back again and see the shadow runnning to you'\n");
							printf("Enter door? Enter 1 for yes/ 2 for no:");
							scanf("%d",&choice1);
						}
						else if (lookBackCounter == 3)
						{
							printf("''You died''\n");
							choice = 99;
							break;
						}
						else
						{
							printf("Invalid input!\n");
							break;
						}
					}

				}
				if (choice1 == 1)
				{
					printf("''YOU ENTERED''\n'You here the door close'\n");
					printf("''LOUD BANGS''\n");
					printf("'You see a box'\n");
			//CHOICE2
					printf("'You look into the box and see a phone'\n''*MESSAGE*''\n''Open the app and play''\n");
					printf("'You open the app and its a guessing game'\n''*MESSAGE*''\n");
					while (game == 1)
					{
						int rando = rand() % 11;

						for(i = 0;i < 4;i++)
                		{
                			printf("Enter a number between 1 and 10\n");
                			scanf("%d",&guess);
                			//compare guess with random number, tell higher/lower
                			if (guess == rando)
                			{
                				attempt--;
                				printf("''*MESSAGE*''\n''Good Job! The random number was %d''\n",rando);
                				printf("Attempts saved %d\n",attempt);
                				break;
                			}
                			else if (guess > rando)
                			{
                				attempt--;
                				printf("''Your guess is higher than the random number!''\n''You have %d attempts left!''",attempt);
                			}
                			else if (guess < rando)
                			{
                				attempt--;
                				printf("''Your guess is lower than the random number!''\n''You have %d attempts left!''",attempt);
                			}
                			else
                			{
                				printf("Invalid Input");
                				break;
                			}
                			printf("''Guess is %d''\n\n",guess);
                		}
						printf("''*MESSAGE*''\n");
						printf("Do you want to play again? Enter 1 for yes/ 2 for no: ");
						scanf("%d",&game);

						switch(game)
						{
							case 1:
								printf("'Lets play again!'\n");
								attempt = 4;
								game = 1;
								break;
							case 2:
								printf("''*MESSAGE*''\n''Thank you for playing!! Come back soon (; ''\n");
								game = 2;
								break;
						}

					}
					printf("'You put down the phone and see the door you closed is now open'\n");
					printf("''*MESSAGE*''\n''Open the new app''\n");
					printf("'You look at the phone again and see a new app'\n");
					printf("''*MESSAGE*''\n''OPEN APP NOW''\n");
					printf("''Enter two numbers that will equal 100''\n");
					/*
					printf("Enter first number: ");
					scanf("%d",&firstNumber);
					printf("Enter second number: ");
					scanf("%d",&secondNumber);
					*/
					while (addNums != 100)
					{
						printf("Enter first number: ");
						scanf("%d",&firstNumber);
						printf("Enter second number: ");
						scanf("%d",&secondNumber);
						addNums = equals(firstNumber, secondNumber);

						if (addNums == 100)
						{
							printf("''*MESSAGE*''\n''Good Job!''\n");
						}
						else if (addNums != 100)
						{
							printf("''*MESSAGE*''\n''WRONGGGG!!''\n");
						}
					}
					//addNums = equals(firstNumber, secondNumber);
					printf("''*MESSAGE*''\n''Throw the phone away''\n");
					printf("'You throw the phone away and hearing noises from the corners'\n");
					printf("''*SPOOKY VOICE*''\n''Look at the ceiling!''\n");
					printf("'You look and see a list of numbers: '\n");

					for (i = 0; i < 4; i++)
					{
						printf("%d\n",listNum[i]);
					}

					printf("''*SPOOKY VOICE*''\n''Choose a number and that person will be sacrificed and you will be spared''\n");
					scanf("%d",&numPerson);

					if (numPerson == 1)
					{
						printf("''Taylor Swift is now sacrificed!''\n");
					}
					else if (numPerson == 2)
					{
						printf("''Johnny Depp is now sacrificed!''\n");
					}
					else if (numPerson == 3) {
					   printf("''Ariana Grande is now sacrificed!''\n");
					}
					else if (numPerson == 4) {
					   printf("''Cristiano Ronaldo is now sacrificed!''\n");
					}
					else
					{
						printf("Invalid Input");
					}
					printf("''*SPOOKY VOICE*''\n''Your are spared''\n''GOODBYE''\n");
				}
				else
				{
					printf("Invalid input\n");
					break;
				}
				/*
				else if (choice1 == 2)
				{
					printf("You turn back and notice ");
				}
				*/
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

int equals(int firstNumber, int secondNumber)
{
	int addNums = firstNumber + secondNumber;
	return addNums;
}

//place functions here

