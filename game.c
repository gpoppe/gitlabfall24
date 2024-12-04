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

void case16();



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
				case16();
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
void case16()
{
    printf("---------------------------------------------\n");
    // Bibek Poudel
    printf("Welcome to room 16. This means you escaped the water trap.");
    printf("There are multiple more traps here if you fall for these trap, You will be sent back");
    printf("---------------------------------------------\n");
    printf("Your first quest starts here\nGuess the Square of the number between 0 to 10\n");

    // Quest 1 guess a number
    int random_number = rand() % 10;
    printf("The number is %d\n", random_number);
    printf("\n");
    int guess;
    scanf("%d", &guess);
    if (guess == random_number ^ 2)
    {
        printf("You have passed the first quest\nGreat now time for next one\n");
    }
    else
    {
        printf("You have failed the first quest\n");
        return;
    }
    printf("---------------------------------------------\n");
    // Guess a random animal
    printf("From the given detail guess the Animal\n");
    printf("I am found in the deserts of Africa and the Middle East. I have long legs and a hump on my back, which helps me survive long periods without water. I am known for my ability to carry heavy loads and am often called the 'Ship of the Desert.'\n");
    char animal[30];
    scanf("%s", animal);
    if (strcmp(animal, "camel") == 0 || strcmp(animal, "Camel") == 0)
    {
        printf("You have passed the second quest\nGreat now time for next one\n");
    }
    else
    {
        printf("You have failed the second quest\n");
        return;
    }
    printf("---------------------------------------------\n");

    // Capital of Australia
    printf("You seem to be very intelligent\nHere is a difficult question for you\n");
    printf("What is the capital of Australia?\n");
    printf("a) Sydney\nb) Melbourne\nc) Canberra\nd) Brisbane\n");

    char answer;
    scanf(" %c", &answer); // Notice the space before %c

    if (answer == 'c')
    {
        printf("You have passed the third quest\nGreat now time for next one\n");
    }
    else
    {
        printf("You have failed the third quest\n");
        return;
    }
    printf("---------------------------------------------\n");
    // Puzzle questions
    printf("Great now the next one");
    printf("You need to focus on this question it is tricky\n");
    printf("What is the total number when you multiply all the numbers in a telephone keypad?\n");
    int guessTotal;
    scanf("%d", &guessTotal);
    if (guessTotal == 0)
    {
        printf("You have passed the fourth quest\nGreat now time for next one\n");
    }
    else
    {
        printf("You have failed the fourth quest\nThere is 0 in the number pad which makes the total to 0.\n");
        return;
    }
    printf("---------------------------------------------\n");
    // Question with list
    char *items[] = {"Apple", "Banana", "Cherry", "Chocolate", "Grapes"};
    printf("Here are some things which can be in the referegerator in the right corner.\nYou should pick the item that should not belong in the fridge.\nIf you miss, You will loose the game\n");

    int num_items = sizeof(items) / sizeof(items[0]);

    for (int i = 0; i < num_items; i++)
    {
        printf("%d) %s\n", i, items[i]);
    }

    int input;
    scanf("%d", &input);
    if (input == 3)
    {
        printf("You have passed the fifth quest\n");
    }
    else
    {
        printf("You have failed the fifth quest\n");
        return;
    }
    printf("*******************| You have Exited from the room |*******************\n");


}

