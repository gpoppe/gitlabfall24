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

void Detectivegame();
int randomOutcome();
void displayClues(char *clues[], int cluesFound);


void room11Challenge(void);

void roomTwoRS(int reply);


void room23Logic();

int RM12DiceRoll();



int rps_game(char handGuess, char cpuGuess);

void room3(void);
void mysteryItemGame(void);

void room30(void);

void room8(void);

void Room26FindTheKey(void);

void room18(void);

void room13sid(void);





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
				//Raquel Serratos
				printf("\n\tYou open door number two and step into a dark room. The door clicks shut behind you, locking you in. \n\tThe only light source is coming from a single lit candle on a table in the center of the room. \n\tSitting there, bathed in the glow, is a goblin with a menacing grin. \n\t\"Your only way out of this room is by winning my challenge,\" it rasps.");

				for(int i = 0; i < 3; i++)
				{
					int reply = 0;
					printf("\n\n\t\"Choose one of the following games.\" demands the goblin.\n\t1. Coin Toss\n\t2. Math Problem\n\t3. Guess a Number\n");

					do{
						printf("Enter a valid choice: ");
						scanf("%d", &reply);
					}
					while(reply != 1 && reply != 2 && reply != 3);

					roomTwoRS(reply);

					getchar();
					printf("\n\nPress any key to continue...\n");
					getchar();

					if(i != 2)
					{
						printf("\n\n\t\"I lied! I want to play another game and if you don't agree I will curse you,\" the goblin threathened menacingly.");
					}
				}

				roomTwoRS(4);

				getchar();
				printf("\n\nPress any key to continue...\n");
				getchar();

				printf("\n\tThe goblin, growing increasingly bored with your attempts, narrows his eyes and stands up abruptly.\n\t\"Enough!\" he snarled, \"I tire of games with you.\"\n\tWith a swift motion, he kicks you out of the room, and the door slams shut behindn you.\n\n");

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
				Detectivegame();
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
				room13sid(); //calls to room 13
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
				// Kingslee Velu
				room18();
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
				
				puts("===== Room23: Corvalis' Room =====");
				printf("\n\nYour transported to what seems to be a space craft floating adrift the cosmos. What do you do?\n");

				puts("1. Turn back");
				puts("2. Walk up to space ship controls");
				puts("3. Do a dance");
				scanf("%d",&choice);

				switch(choice){


					case 1:
					{
						puts("\n[You do a swift about face and leave the spaceship]\n");
					}
					break;					


					case 2:
					{
						puts("\n[Something interesting happens!]\n");
						room23Logic();
						
					}
					break;


					case 3:
					{
						puts("\n[You do the boogey woogie. Satisified with your dance amongst the stars. You take your leave]\n");
					}
					break;
				}
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
				// Camila Ramirez
				Room26FindTheKey();
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
				puts("you enter room30 \n");
                                room30();
				
				
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
	const char* actions[] =
	{
			"1.Fight a monster\n",
			"2.Walk to the desk\n",
			"3.Talk to the glowing red orb\n",
			"4.Pick up a gas lamp\n",
			"5.Scream for help\n"
	};

	int choice;
	const int num = 5;
	int guess = 0;
	char answer[] = "a secret";
	char riddle[20];

	srand(time(NULL));

	while (1)
	{
		int randNum = 1 + (rand() % 5);
		for (int i = 0; i < num; i++)
		{
			printf("%s", actions[i]);
		}
		printf("What will you choose?\n");
		scanf("%d", &choice);
		while (getchar() != '\n');
		printf("\n");

		switch (choice)
		{
		case 1:
			puts("A MONSTER HAS APPEARED!");
			puts("Pick a number between 1 and 5, if you choose right, you win the fight!");

			scanf("%d", &guess);

			if (guess == randNum)
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
		
		if (choice == 3)
		{
			break;
		}
	}
}

//Room 23 Function
void room23Logic(){
	//make 4 indiidual choices
	//use one loop, one array, a nradom number
	//retyrn back to the og loop
	int choice;

	puts("You see a complex array of controls before you. Several glowing buttons and shining levers. And a simple keyboard connected to a screen displaying a program called SpaceSearch.com");
	puts("What will you do now?");

	puts("1. Press a button");
	puts("2. Pull a lever");
	puts("3. Use the search box");



	scanf("%d", &choice);


	if(choice == 1){

		int buttonChoice;
		int countdown = rand() % 10 + 1;
		int maxButtons = 10;
		int randButton = rand() % maxButtons + 1;

		puts("The lights begin glowing red, blaring alarms as an annocument comes over the speakers.");
		puts("S E L F  D E S T R U C T  I N I T I A T E D");
		printf("DESTRUCTION IN : %d\n", countdown);
		printf("\nYou panic, realizing you need to fight the right button to deactive the explosion. There are %d random buttons that light up as possible options\n", maxButtons);

		do{

			printf("\nChoose a button between 1 and %d\n",maxButtons);
			scanf("%d", &buttonChoice);

			if(buttonChoice == randButton){
				puts("The alarms stop blaring, and you now know you are safe. With a sigh of releif, you take your leave of this flying metal death trap.\n\n");

			}

			else{
				puts("That button was not correct");
				countdown--;
				printf("DESTRUCTION IN : %d\n", countdown);
			}

		}
		while(buttonChoice != randButton && countdown > 0);

		if(countdown <= 0){
			puts("The ship shutters violently, as your vision is consumbed by a bright light. Then everything goes dark with as you hear a lightbulb burn out.\n\n");
		}

	}

	if(choice == 2){

		int choice2;

		puts("You warp forward twaord a nearby star, with no destiation selected. You'll burn up on impact if you don't take control!");
		puts("1. Steer away");
		puts("2. Let it go");
		puts("3. Do a 360");

		scanf("%d", &choice2);


		if(choice2 == 1){
			puts("You narroly avoid the star, stearing clear of the blazing inferno");
		}
		else if(choice2 == 2){
			puts("You smash right into the star, supercharging your ships engines, causing them to go even faster!");
		}
		else if (choice2 == 3){
			puts("You pull a sick 360, spining at such speeds that you glide around the side. Making you slightly dizzy");
		}
		else {
			puts("You perform an unexpected manuver! Causing you to smash through the star, causing it to go supernova!");
		}
	
		puts("Unfortuatly you couldn't control the ships speed, and kept moving faster. Eventually the world melts away as you transend our dimension.\n\n");

	}

	if(choice ==3){
		int vacationID;
		int locCount = 5;
		char locations[5][20] = {

		"Thahiti",
		"Earth",
		"Glip Glorb 5",
		"Lava planet"
		"No where"
		};
		puts("\n\nYou open the browser as it prompts you to type in a destiation as a number. The page is labeled with the following");
		puts("TYPE IN AN ID TO YOUR NEW SPACE VACATION DESTINATION!");
		puts("Enter a number between 1-5");
		scanf("%d",&vacationID);

		char *vacation;
		if(vacationID >= locCount){
			vacation = "A random place";
			//printf("\nYou selected your vacation spot to %s! Enjoy your stay!\n\n",vacation);
		}

		else{
			vacation = locations[vacationID-1];
		}
		
		printf("\nYou selected your vacation spot to %s! Enjoy your stay!\n\n",vacation);
		puts("The ship warps away to your new destination, and you spend a few years there in relaitive comfort. One day when louging around you close your eyes going into a deep sleep...\n\n");
	}


	if(choice < 1 || choice > 3){
		printf("Choice count %d\n",choice);
		puts("You do something...unexpected. Your moves and actions were so crazy that somehow you ended up in the vaccume of space. Despite being cool, you drift into the void of space until you loose consiousness. You wake up back where you started\n\n");
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


//room30 Ivan

void room30(void){
	
	puts(" Oh my goodness the door opened up to a datacenter of some sorts? \n ");

	puts(" What do you do? \n");
	puts(" 1. Go back to the room 30 door universe \n");
	puts(" 2. Stand still and chill out \n");
	puts(" 3. Explore the datacenter \n");


	puts(" Input your decision as 1,2, or 3 \n");
	
	int choice = 3;

	scanf("%d", &choice);
	
	if(choice == 1){
		puts(" You go back to the 99 doors \n");
		return;
	}
	if(choice == 2) {
		puts(" You stand and wait, eventually get bored and explore the datacenter \n");
	}
	
	puts(" So now you explore the datacenter, where do you want to go \n");

    char *options[5] = {
        "Look at the server racks",
        "Look for a different room",
        "Look at the floor",
        "Search for the power source",
        "Wreak Havoc"
    };

    srand(time(NULL));

    int daUsachoices = 0;

    for (int i = 0; i < 5; i++) {
	
        for (int j = 0; j < 5; j++) {
	    // loop to print options
            printf("%d. %s \n", j + 1, options[j]);
        }

        puts(" \n  Input your decision as 1,2,3,4, or 5 ");
	puts(" or if u feel spicy, put anything over 6. ie 6-999 for a random choice \n");


        int userChoice;
        scanf("%d", &userChoice);

        if (userChoice < 1 || userChoice > 5) {
            puts("Invalid choice! For some reason you randomly choose by playing rock paper scissors with yourself \n ");
            // random choice
	    userChoice = (rand() % 5) + 1; 
        }
	
	
	switch (userChoice) {
            case 1:
                puts("You inspect the server racks, Each time noticing more details \n");
                daUsachoices += 1;            
		break;

            case 2:
                puts("You look for rooms around the datacenter, heck a bathroom please. Too bad no dice. \n");
                daUsachoices += 2;
		break;

            case 3:
                puts("You look at the floor. Absolutely mental. \n");
                daUsachoices += 3;                
		break;

            case 4:
                puts("You search for the power source that is powering this massive datacenter. \n ");
                daUsachoices += 4;
		break;

            case 5:
                puts(" You walk around destroying stuff, yeah you think your so cool. In fact you litter the floor with INTEL CORE 9HX 64 PROCESSERS. AVAILABLE AT NOW!. SPONSORED BY RAID SHADOW LEGENDS \n ");
                daUsachoices += 5;
		break;

            default:
                puts("You stand there, unsure of what to do.");
                break;
        }
		
    }
	
    puts("Wow what an adventure \n");
	
    if(daUsachoices == 5){
    	puts("OH MY GOSH, AN AI LLM VERSION OF JEFF BEZOS APPEARS. \n");
	puts("YOU HAVE BEEN OFFERED 70 billion dollars! \n");
     puts("While grabbing the money, you sadly slipped and fell and are back to the rooms \n");
     return;
    }
	
    if(daUsachoices == 10){
        puts(" there was not bathroom. \n");
	return;
    }

    if(daUsachoices == 15){
        puts(" The Floor speaks to you in no other ways. You are floor. Too bad your back to the rooms. \n");
        return;
    }
    
    if(daUsachoices == 20){
        puts(" You found the power source. Turns out it was a huge tokamak fusion reactor. Cool. You wanted to eat some plasma but you sadly got teleported. \n");
        return;
    }
    
    if(daUsachoices == 25){
        puts(" The datacenter explodes. Like humongous explosion. Great work. Anyway after the explosion you are kicked back into the 99 rooms by ChatGpt. \n");
        return;
    }

    if(daUsachoices == 19){
        puts(" Secret. Great. you win everything. Goodbye. \n");
        return;
    }



}






//===============================================================================================


//===============================================================================================




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

//Room 18 Function
//===============================================================================================
void room18(void) {
    int choices[5] = {0};
    int randomNum;
    int guess, attempts = 0;
    char playAgain;

    printf("Welcome to Room 18!\n");
    printf("Here, you will play random number guessing game.\n");
    printf("You have 5 attempts to guess correct number b/w 1 and 20.\n");

    // Generate random num
    srand(time(NULL));
    randomNum = (rand() % 20) + 1;

    do {
        printf("Enter your guess (1-20): ");
        scanf("%d", &guess);
        attempts++;

        if (guess == randomNum) {
            printf("Congrat! You guessed the correct number: %d\n", randomNum);
            break;
        } else if (guess < randomNum) {
            printf("Too low. Try again.\n");
        } else {
            printf("Too high. Try again.\n");
        }

        // Store the guess count
        choices[attempts - 1] = guess;

        if (attempts == 5) {
            printf("You used all the attemps. The correct number was %d.\n", randomNum);
            break;
        }
    } while (1);

    printf("\nYour guesses are: ");
    for (int i = 0; i < attempts; i++) {
        printf("%d ", choices[i]);
    }
    printf("\n");

	printf("Would you like to play again in Room 18? (y/n): ");
    scanf(" %c", &playAgain);

    if (playAgain == 'y' || playAgain == 'Y') {
        room18();
    } else {
        printf("Returning to the main menu...\n");
    }

}

void roomTwoRS(int reply)
{
	//switch statement
	switch(reply)
	{
		case 1:
			srand(time(NULL));
			int answers[5];
			int wins = 0;
			int losses = 0;

			for(int i = 0; i < 3; i++)
			{
				answers[i] = (rand() % 2);
			}

			printf("\n\t\"I challenge you to a coin toss, \"the goblin laughed. \"\tYou must guess correctly at least 2 out of 3 coin tosses to win your freedom.\"");

		        for(int i = 0; i < 3; i++)
        		{
                		do{
                        		printf("\n\tEnter 0 for heads or 1 for tails (ROUND %d): ", i+1);
		                        scanf("%d", &reply);
				} while(reply != 1 && reply != 0);

		                if(answers[i] == reply)
                		{
                        		printf("\tCorrect");
		                        wins += 1;
                		}
                		else
		                {
                	        	printf("\tWrong");
	                        	losses += 1;
        		        }
		                printf("\t\t***TOTAL WINS: %d\t***TOTAL LOSSES: %d\t", wins, losses);
        		}

		        if(wins >= 2)
		        {
                		printf("\n\n\tYou Won!");
				break;
        		}
        		printf("\n\n\tYou lost.");
			break;

		case 2:
			int x = 1 + (rand() % 40);
			int y = 1 + (rand() % 30);

			printf("\n\tThe goblin cackles and taunts, \"Let's see if you can solve this equation correctly!\"\n\t%d + ((%d - %d) * %d) = ?\nEnter your answer: ", 10 * x, 2 * y, 3 * x, y);
			x = (10 * x) - (((2 * y) - (3 * x)) * y);
			scanf("%d", &reply);

			if(x == reply)
			{
				printf("\n\t\"Inconceivable, You Are Correct!\" said the goblin unhappily.");
				break;
			}
			printf("\n\t\"Wrong. The answer is %d,\" sneered the goblin.", x);
			break;
		case 3:
			int rando = 10 + (rand() % 101);
			printf("\n\t\"The goblin's eyes gleamed with mischief. \"Guess a number between 1 and %d\", the goblin challenged, its wicked grin widening.\nEnter your guess: ", rando);
	        	scanf("%d", &reply);

			rando = 1 + (rand() % rando);

			if(reply == rando)
       			{
	        	        printf("\n\t\"Impossible! You guessed correctly!\" screamed the goblin.");
				break;
        		}
	        	printf("\n\t\"Wrong! The answer was %d\", mocked the goblin", rando);
			break;
		case 4:
			printf("\n\n\tThe goblin decides to try a trickier challenge. He offers the following riddle.\n\tA plane with 21 first class passengers and 55 economy class passengers flying to Canada crashed on the border between Canada and the United States.\n\tHow many survivors should be buried in Canada?\n\n\tEnter a digit only: ");
			scanf("%d", &reply);
			if(reply == 0)
			{
				printf("\n\t\"Fine you win again,\" growled the goblin.\n");
				break;
			}
			printf("\n\t\"Wrong. You cannot bury survivors.\"sighed the goblin unimpressed.\n");
			break;
	}
}



//===============================================================================================

// sidney's function ----------------------------------------------------------------------------
void room13sid(void)
{
	int actionsid, rngsid;
	char proceedsid = 'y';
	printf("You open Door 13... you step into a chilling room filled with whispers and an eerie feeling..\n");
	while (proceedsid == 'y' || proceedsid == 'Y')
	{
		puts("\nWhat would you like to do?");
		puts("1. Investigate the whispers and where they're coming from.");
		puts("2. Open the glowy green box on the table.");
		puts("3. Look behind the curtains drenched in blood.");
		puts("4. Examine the words written in blood on the walls that spell out HELP.");
		puts("5. Leave the room.");
		scanf("%d", &actionsid);

		switch (actionsid)
		{
			case 1:
				printf("As you approach the whispers, you see something walking in the distance.. a shadowy figure perhaps? It leaves an icy chill down ur back.\n");
				break;
			case 2:
				rngsid = rand() %2;
				if (rngsid == 0)
					printf("The box contains a candle that flickers. It seems harmless?\n");
				else
					printf("The box bursts open and a ghostly figure pops out screaming!\n");
				break;
			case 3:
				printf("Behind the curtains you find a mirror but you can't see your reflection. It breaks.\n");
				break;
			case 4:
				printf("You quickly run out of Door 13, heart pounding and sanity at 1%%.\n");
				proceedsid = 'n';
				break;
			default:
				printf("The room grows colder as you hesitate. Make a valid choice!\n");
		}

		if (proceedsid != 'n')
		{
			printf("Do you want to continue exploring Door 13? (y/n): ");
			scanf(" %c", &proceedsid);
		}
	}
}

//------------------------------------------------------------------------------------------------



