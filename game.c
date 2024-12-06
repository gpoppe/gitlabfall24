//contributors
//GP
//Yyong Taing
//



#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

//place function prototypes here


void room11Challenge(void);

int RM12DiceRoll();



int rps_game(char handGuess, char cpuGuess);

void room3(void);

void room8(void);

void mysteryItemGame(void);


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
//nathan

				int wins = 0;
				int choice1 = 0;

				int random = 1 + rand() % 21; //random number for 1-20 game
				int guess = 0; //number guessing game guesses
				int tries = 3;
				int i = 0;

				char scrambled_word[] ="extraordinary"; //word game
				char wordGuess[20];

				int result;
				int random_rps = rand() % 3; //random letter for rps game
				char choices [] = {'r', 'p', 's'}; //rock paper scissors
				char handGuess;
				char cpuGuess;

				printf("\nThe door slams behind you and you realize you probably should've chosen another room.\n");
				printf("Fortunately, it looks like the mechanical door will allow you to leave if you can beat it in at least 3 games of its choosing.\n\n");
				//gather a total of 3 wins

				while(wins < 3)
				{

					printf("Enter a number (1-3) to select a game.\n\n");

					printf("1. Word unscramble\n");
					printf("2. Number guess\n");
					printf("3. Rock, paper, scissors\n\n");

					scanf("%d", &choice1);

					switch(choice1)
					{
						case 1:
							{ 
								printf("\nUnscramble the word to win!\n\nScrambled word: soeintrxycau\n");
								printf("Your guess: ");

							        scanf("%s", wordGuess);

								if(strcmp(wordGuess, scrambled_word)== 0)
								{
									wins = wins + 1;
									printf("\nYou win! Nicely done.\n");
									printf("Total wins: %d\n\n", wins);
								}
								else 
								{
									printf("\nBzzzt. Incorrect! Better luck next time!\n\n");
								}

								break;

							}
							
						case 2:
							{
								
						        printf("\nGuess the correct number between 1-20 to win. You have 3 tries.\n");
							tries = 3; //reset tries counter

							for(i = 0; i < 3; i++)
							{

								printf("Your guess: ");
								scanf("%d", &guess);

								tries--;

								if(guess < random)
								{
									printf("\nYour guess is lower than correct value. Tries remaining: %d\n", tries);

								} else if (guess > random)
								{
									printf("\nYour guess is higher than the correct value. Tries remaining: %d\n", tries);

								} else if (guess == random)
								{
									wins = wins + 1;
									printf("\nYou got it! Nicely done.\n");
									printf("Total wins: %d\n\n", wins);
									break;
								}

								if(tries == 0 && (guess != random))
								{
									printf("You lose! Better luck next time.\n\n");
								}


							}

								break;
							}
						case 3:
							{
								printf("\nRock, paper, scissors!\nEnter 'r' for rock, 'p' for paper, or 's' for scissors: ");
								scanf(" %c", &handGuess);

								cpuGuess = choices[random_rps];

								result = rps_game(handGuess, cpuGuess);
								
								if (result == 1)
								{
								wins = wins + 1;
								printf("Total wins: %d\n\n", wins);
								}								

								break;
							}

						default: printf("Invalid Entry!\n");

				}

					if(wins == 3)
					{
						printf("The tumblers in the door release as you obtain your third win.\nYou've escaped!\n\n");
					}


			}
	
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
				puts("*YOU HAVE ENTERED LUCKY ROOM 8!*");
				room8();
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
				puts("room10");
				break;
			}
			
			case 11:
			{
			 room11Challenge(); //this will call out room 11 to play the game in this room 
//Cecilia
				break;
			}
			case 12:
			{
				puts("room12");
//DanielR.
				int cleared = 0;
				int choice = 0;
				int roll = 0;

				puts("Behind door 12, You are met with a grand open forest.");
				puts("After such a panic, you decide to take in the scenery for a moment and catch your breath.");
				puts("You can make out a door at the top of a hill in the distance.");
				puts("But who knows what lies within this forest.");
				puts("You spot a satchel on the ground beneath you.");
				puts("Without checking its contents, you pick up the satchel and make haste to the door.");
				puts("...");
				puts("Nightfall approaches and you are still wandering the forest.");
				puts("The door creeps closer with every step.");
				puts("You reach the hill.");
				puts("But before climbing up, you hear a howl in the distance.");
				puts("*Encounter!*");
				puts("A pack of wolves leap out in front of you! Blocking your path.");
				puts("Guess it's time to put the contents of the satchel to good use!");
				puts("You reach inside and pull out...");



				while(cleared == 0)
				{
					//code
					printf("\n");
					puts("--------------------");
					puts("||||||Satchel|||||||");
					puts("--------------------");
					printf("\n");
					puts("1. An offensive message?");
					printf("\n");
					puts("2. A Sword(size 16-bits!, those who know, know)");
					printf("\n");
					puts("3. A wind up Monkey(may go boom)");
					printf("\n");
					puts("4. A Walkie Talkie(phone a friend)");
					printf("\n");
					puts("5. GUN");
					printf("\n");
					puts("Disclaimer: All choices require a dice roll, however not all choices can succeed.");

					printf("\n Enter Your choice: ");
					scanf("%d", &choice);

					switch(choice)
					{
						case 1:
							puts("You pull out a slip of paper and read the message to the wolves...");
							roll = RM12DiceRoll();
							printf("\n You rolled a %d\n", roll);
							if(roll == 1)
							{
								puts("Critical Failure");
								printf("\n");
								puts("You read out... 'Avada Kedavra' and the last thing you see is a green flash");
								puts("STATUS: DEAD");
								printf("\n");
								puts("*********");
								puts("*FAILURE*");
								puts("*********");
								printf("\n");
								puts("Wait a second... I don't think that spells working properly");
								puts("And where'd you get a wand to cast it?");
								printf("\n");
								puts("A bright flash emminates, and your alive once more. As if seemingly in a loop...");

							}
							else if(roll <=10)
							{
								puts("Failure");
								printf("\n");
								puts("You read out, and I quote, 'You mangy mutts' {._.}");
								puts("This simply angered the wolves and they proceeded to maul you to death");
								puts("STATUS: DEAD");
								printf("\n");
								puts("*********");
								puts("*FAILURE*");
								puts("*********");
								printf("\n");
								puts("I'm not sure what you expected there buddy");
								printf("\n");
								puts("A bright flash emminates, and your alive once more. As if seemingly in a loop...");
							}
							else if(roll >=11)
							{
								puts("Success!");
								printf("\n");
								puts("You read out the most heinous words imaginable");
								puts("So bad that I won't even bother describing your foul language");
								puts("The wolves were so utterly disgusted they left on their own accord");
								printf("\n");
								puts("*********");
								puts("*SUCCESS*");
								puts("*********");
								printf("\n");
								puts("Do you kiss your mother with that mouth?");
								printf("\n");
								puts("With the wolves gone, you escape through the door.");
								puts("Only to be met with a familiar scene...");
								printf("\n");
								cleared = 1;
								

							}
							else if(roll == 20)
							{
								puts("NAT 20!?");
								printf("\n");
								puts("Wow, good for you. You Win.");
								printf("\n");
								puts("*********");
								puts("*SUCCESS*");
								puts("*********");
								printf("\n");
								puts("What? You thought I'd reward you for a Nat 20?");
								printf("\n");
								puts("With the wolves gone, you escape through the door.");
								puts("Only to be met with a familiar scene...");
								printf("\n");
								cleared = 1;
								

							}


							break;
						case 2:
							//code
							break;
						case 3:
							//code
							break;
						case 4:
							//code
							break;
						case 5:
							//code
							break;
						default:
							puts("Invalid Selection");
							break;

					}

				}

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


//Yyong's Function
void room8(void)
{
        puts("There are five options for you to choose from in this lucky room:");
        const char *actions[]=
        {
                "1.Fight a monster\n",
                "2.Walk to the desk\n",
                "3.Talk to the glowing red orb\n",
                "4.Pick up a gas lamp\n",
                "5.Scream for help\n"
        };
       
        int choice;
	const int num= 5;
	int guess = 0;
	char answer[]= "a secret";
       	char riddle[20];	

	srand(time(NULL));

        while(1)
        {
		int randNum = 1+ (rand()%5);
		for(int i = 0;i < num;i++)
		{
			printf("%s", actions[i]);
		}
		printf("What will you choose?\n");
		scanf("%d", &choice);
		while (getchar() != '\n');
		printf("\n");

		switch(choice)
		{
			case 1:
				puts("A MONSTER HAS APPEARED!");
				puts("Pick a number between 1 and 5, if you choose right, you win the fight!"); 
	
				scanf("%d",&guess);

				if(guess == randNum)
				{
					puts("CONGRATS YOU HAVE DEFEATED THE MONSTER!\n");
				}
				else
				{
					puts("OH NO! The monster beat you & stole your pants!\n");
				}
				break;
			case 2:
				puts("A glowing scroll has appearred on the desk, but the writing is too small to read.");
				puts("*Looks in drawer* AH a magnifying glass!");
				puts("It seems to be a riddle!");
				puts("\"If you have me, you will want to share me. If you share me, you will no longer have me");
				puts("What is your answer?");
				fgets(riddle, sizeof(riddle), stdin); 
				riddle[strcspn(riddle, "\n")] = '\0';

        if (strcasecmp(answer, riddle) == 0) 
				{
				    	puts("YOU'VE SOLVED THE RIDDLE!\n");
				} 
				else 
				{
		    			puts("UH OH, You've guessed wrong, the scroll has vanished!\n");
                		}
               			 break;
			case 3:
				puts("Hi, I was hopi-");
                		puts("Red Orb:\"EWW A HUMAN, GET OUT OF MY SIGHT!!!!!\"");
                		puts("*A TRAPPED DOOR OPENED BENEATH YOU*");
                		puts("Red Orb:\"MUAHAHHAAHA, GOOD RIDDANCE!!!\"\n");
                		break;
			case 4:
				puts("You picked up the gas lamp, but nothing happened...");
				puts("*Puts it back down*\n");
				break;
			
			case 5:
				puts("HEEEEEEEELLLLLLLLLLLLLLPPPPPP!!");
				puts("*a lady in a white dress appears and firmly hugs you*");
				puts("*Without saying a word, she vanishes just as fast as she came*");
				puts("what the hell was that????");
				puts("*continues screaming, hopefully she comes back*\n");
				break;

            		default:
                		puts("Please choose one of the options.");	
}
		if(choice == 3)
		{		 
			break;
		}
}
}

// Anushka's function

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


//room 11 function

void room11Challenge(void) {
    int choice;
    int randomCode1=(rand()%10)+1;
    int randomCode2=(rand()%10)+1;
    int guess1, guess2;
    char *hints[3]={
        "The codes are both single-digit numbers.",
        "Each code is between 1 and 10.",
        "The numbers can be odd or even. Who knows?"
    };

    puts("You are in room 11, and you must complete the task to survive. The water is rising, and you need to find a way to escape.");
    puts("In front of you is a big red door with a treasure chest that glitters with gold! To win the gold and escape, you must guess the correct codes to open the chest.");
    puts("BUT there's a catch once you select option 1 the timer will start counting down! you have 60 seconds, IF YOU DO NOT GUESS IN 60 SECONDS YOU WILL LOOSE ALL YOUR ATTEMPS! GOODLUCK :^)");
    puts("If you fail, the water will rise, and you will drown! The chest contains great wealth, but only if you can solve the challenge.");

    while(1){
        puts("\nWhat will you do?");
        puts("1. Attempt to guess the codes to open the treasure chest.");
        puts("2. Search the room for clues to open the chest.");
        puts("3. Talk to the spirit guarding the room for clues.");
        puts("4. Try to escape through the door with the treasure.");
        puts("5. Try to open the chest with a knife.");

        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);
        if (choice==99){
            puts("You have chosen to leave the room. Goodbye!");
            return;
        }

        switch(choice){
            case 1:{
                puts("\nA spirit comes to you and says: 'To open the chest, guess the correct codes.'");
                puts("You have 4 attempts to guess both codes correctly. Here are some hints:");
                for(int i=0; i<3; i++){
                    printf("Hint %d: %s\n", i + 1, hints[i]);
                }

                time_t startTime,currentTime;
                time(&startTime);
                int attempts=4;

                while(attempts > 0){
                    time(&currentTime);
                    double elapsedTime=difftime(currentTime, startTime);
                    if(elapsedTime>=60.0) {
                        puts("\nTime's up! The chest has been locked permanently, and the water rises. You failed to escape!");
                        return;
                    }

                    printf("\nEnter your first guess: ");
                    scanf("%d", &guess1);

                    time(&currentTime);
                    elapsedTime = difftime(currentTime, startTime);
                    if(elapsedTime >= 60.0){
                        puts("\nTime's up! The chest has been locked permanently, and the water rises. You failed to escape!");
                        return;
                    }

                    printf("Enter your second guess: ");
                    scanf("%d", &guess2);
                    if (guess1==randomCode1 && guess2 == randomCode2) {
                        puts("\nThe chest opens, and you are rewarded with gold! You have escaped the rising water!");
                        return;
                    } else{
                        attempts--;
                        printf("Wrong code! The water is filling up. You have %d attempt(s) left.\n", attempts);
                    }
                }
                puts("\nYou failed to guess the code. The chest remains locked, and the water rises. You drowned!");
                return;
            }
            case 2:
                puts("You search the room, but all you find are old dusty books and cobwebs. Nothing useful.");
                break;
            case 3:
                puts("The spirit guarding the room says: 'I can tell you a secret, but you must prove your worth by guessing both codes correctly.'");
                break;
            case 4:
                puts("You try the door, but it's locked. There's no way to open it without solving the puzzle.");
                break;
            case 5:
                puts("You attempt to force open the chest with a knife, but it doesn't work. The chest remains locked.");
                break;
            default:
                puts("Invalid choice. Try again.");
        }
    }
}


int RM12DiceRoll()
{
	srand(time(NULL));

	//random # from 1-20
	int diceroll = 1 + (rand() %20);
	
	return diceroll;
}


int rps_game(char handGuess, char cpuGuess)
{

  if (handGuess == cpuGuess)
  {
	  printf("Computer chose: %c\n\n", cpuGuess);
	  printf("Its a tie!\n\n");
	  return 0;

  } else if ((handGuess == 'r' && cpuGuess == 's') || (handGuess == 'p' && cpuGuess == 'r') || (handGuess == 's' && cpuGuess == 'p')) 
  {
	  printf("Computer chose: %c\n\n", cpuGuess);
	  printf("You win! Nicely done.\n\n");
	  return 1;

  } else 
  { 
	  printf("Computer chose: %c\n\n", cpuGuess);
	  printf("You lose! Better luck next time.\n\n");
	  return -1;
  }

}

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

