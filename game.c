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

void room3(void);

int room10bad(int num);
int room10Red(int red);
int room10Blue(int blue);
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
				room3();
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
//
			case 9:
			{
//Serina			
				puts("room9");
				break;
			}
			case 10:
			{
//Angel
				int userC= 0;
				int badCount=0;
				int theBox[]={1,2,3,4,5};
				puts("Welcome to room10");
				puts("In front of you there is a desk with three crystals on the table");
				puts("A note is found under the crystal it reads: There is no escape only Games");
				start:
				puts("You can now only pick one of the two crystals they are red (1) and blue(2) ");
				scanf("%d", &userC);
				if(userC ==1)
				{
					badCount = room10Red(badCount);
					 if(badCount==3){
                                                break;
                                        }
                                        else{
                                                goto start;
                                        }

				}
				else if(userC == 2)
				{
					badCount = room10Blue(badCount);
					 if(badCount==3){
                                                break;
                                        }
                                        else{
                                                goto start;
                                        }
				}
				else 
				{
					badCount = room10bad(badCount);
					if(badCount==3){
						break;
					}
					else{
						goto start;
					}

				}	
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
//Corvalis Room - 23
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

//===============================================================================================
//Nestor's Function
void room3(void)
{
    int roomChoice3 = 0;
    int roomResults3[5] = {0};
    printf("You have entered Room 3. What would you like to do?\n");
    printf("1. Gambler's hall\n");
    printf("2. Nightmare slope\n");
    printf("3. Tavern\n");
    printf("4. Three little pigs\n");
    printf("5. ???\n");
    printf("Choose an option (1-5): ");
    scanf("%d", &roomChoice3);

    switch(roomChoice3)
    {
        case 1:
        {
            //gambler
            puts("The Old Gambler appears! He challenges you to a good ol' coinflip, all in. Heads or tails?");
            srand(time(NULL));
            int coin = rand() % 2;
            char userInput3;
            int pWins = 0, gWins = 0; //pWins = player, gWins = gambler
            int rounds = 0;
            bool firstTimeWin = false;

            printf("Choose heads or tails (h/t): ");
            scanf(" %c", &userInput3);

            if ((userInput3 == 'h' && coin == 0) || (userInput3 == 't' && coin == 1)) 
            {
                printf("You won!\n");
                firstTimeWin = true;
            } 
            else
            {
                printf("You lost.\n");
            }

            if (firstTimeWin)
            {
                printf("The Old Gambler is a sore loser. Best of 3!\n");

                while (rounds < 3 && pWins < 2 && gWins < 2)
                {
                    int nCoin = rand() % 2;
                    printf("Choose heads or tails (h/t): ");
                    scanf(" %c", &userInput3);

                if ((userInput3 == 'h' && nCoin == 0) || (userInput3 == 't' && nCoin == 1)) 
                {
                    printf("You won this round! That's 2 out of 3.\n");
                    pWins+=2;
                }
                else
                {
                    printf("You lost this round!\n");
                    gWins++;
                }
                rounds++;
            }

            if (pWins > gWins)
            {
                printf("You won!\n");
            }
            else
            {
                printf("The Old Gambler won.\n");
            }
            
            }

            printf("You have successfully completed room 3!\n");
            break;
        }
        case 2:
        {
            //nightmare
            puts("Are you ready to face your nightmare? Here comes a pack of.....bunnies?");
            puts("*checks notes*");
            puts("Looks like the programming messed up and put you into the comfort room instead, how lucky!");
            printf("You have successfully completed room 3!\n");
            break;
        }
        case 3:
        {
            //tavern
            puts("You walk into a tavern and see a drunken man turn and look at you.");
            puts("He challenges you to arm wrestling but is clearly too drunk to walk straight.");
            char win3;
            printf("Accept his challenge? (y/n): ");
            scanf(" %c", &win3); 
            printf("You win regardless of your choice, he was about to pass out anyway.\n");
            roomResults3[2] = 1;  //1 = win
            printf("You have successfully completed room 3!\n");
            break;
        }
        case 4:
        {
            //pigs
            char uInput3;
            printf("You come across three small pigs, will you play with them? (y/n): ");
            scanf(" %c", &uInput3); 

            if (uInput3 == 'y') {
                printf("I mean why not, why shouldn't you play with the piggies? You have time to spare anyway.\n");
            } else if (uInput3 == 'n') {
                printf("The piggies stare at you while you pass by then go back to doing pig things and making pig noises. Oink!\n");
            } else {
                printf("Invalid input. Please respond with 'y' or 'n'.\n");
            }
            printf("You have successfully completed room 3!\n");
            break;
        }
        case 5:
        {
            //???
            for (int i = 0; i < 5; i++) {
                printf("Why did you even pick this one?\n");
            }
            printf(".....\n");
            printf("Whoops\n");
            printf("You have successfully completed room 3!\n");
            break;
        }
        default:
            printf("Invalid choice. Please choose between 1 and 5.\n");
    }
}

//===============================================================================================
//

int room10bad(int num)
{
	puts("You have inputted an inocorrect input");
	num++;
	switch(num)
	{
		case 1:
			{
				puts("----------------------------------------------------------");
				puts("This has been your first offense a voice shouts");
			       	puts("DO NOT LET IT HAPPEN AGAIN");
				puts("----------------------------------------------------------");
				break;
			}
		case 2:
			{
				puts("----------------------------------------------------------");
				puts("This is the second time you inputed a wrong option");
				puts("You have one last chance to comply or be forced out");
				puts("----------------------------------------------------------");
				break;
			}
		default:
				puts("----------------------------------------------------------");
				puts("this is the end for you a strong wind pushes you out");
				puts("----------------------------------------------------------");
	}
	return num;
}
int room10Red(int red){
	srand(time(NULL));
	int guess=0;
	int Cards [5];
	for(int i =0; i<5; i++)
	{
		Cards [i]= rand() % 13+1;	
		
	}
	puts("-----------------------------------------------------------------");
	puts("You have choosen the red stone");
	puts("The Stone Glows with power and all of a sudden you are transported to a diffrent room");
	puts("There is a man with a deck of cards he lays out 4 cards and wants to play a game");
	puts("each card has a possible number from 1 -13");
	for(int i=0; i<4;i++)
	{
		start:
		printf("Current Card number: %d\n", Cards[i]);	
		puts("Is the next Card Higher(1) or Lower(2)?");
		scanf(" %d", & guess);
		if((guess == 1 && Cards[i+1]>Cards[i])||(guess == 2 && Cards[i+1]< Cards[i]))
		{
			printf("Correct! the answer was : %d\n", Cards[i+1]);
		}
		else if((guess == 1 && Cards[i+1]<Cards[i])||(guess == 2 && Cards[i+1]> Cards[i]))
		{
			printf("Sorry you are worng the answer is: %d\n", Cards[i+1]);	
		}
		else
		{
			red = room10bad(red);
			 if(red==3)
			 {
				 break;
                         }
                         else
			 {
                            goto start;
                         }
			
		}

	}
	puts("You have completed the game I hope you had fun");
	red==3;
	puts("You will now be taken back to the main room ");
	puts("-----------------------------------------------------------------");
	return red;
}
int room10Blue(int blue)
{
	char user = 'y';
	puts("-----------------------------------------------------------------");
	puts("You enter a realaxing hot spring there you decide to get in the water to relax");
	puts("The water is warm and you feel better ");
	printf("A nice elf says \"You have commited %d errors have a glass water since you are still here \"\n", blue);
	while(1){
		
		puts("do you take the water (y) yes or no (n)");
		scanf(" %c", &user);

		if(user == 'y')
		{
			blue = 0;
			puts("-----------------------------------------------------------------");
			puts("somthing feels diffrent about that water ");
			puts("the elf seems happy to have found a friend");
			puts("The question now is are you happy with your new friend");
			puts("either way it doesnt matter as you are taken back to room 10");
			break;	
		}
		else if(user == 'n')
		{
			puts("-----------------------------------------------------------------");
			puts("The elf seems upset with you and slightly offened ");
			printf("\"can you please take that door and leave\" the elf says\n");
			puts("A magic door apeared out of nowhere you open it and go back to room 10");
			break;
		}
		else
		{
			printf("\"I did not take you as a rebel I respect that\" says the elf\n");
			blue = room10bad(blue);
                         if(blue<3)
                         {
			 	puts("you are sent back to room 10.");
				break;
			 }
     

		}
	}
	return blue;

}




















