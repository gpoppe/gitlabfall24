//contributors
//GP
//Yyong Taing
//
//Esteban Nino



#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

//place function prototypes here

void room20(void);

void Detectivegame();
int randomOutcome();
void displayClues(char *clues[], int cluesFound);


void room11Challenge(void);
void room24(void);
void roomTwoRS(int reply);


void room23Logic();

int RM12DiceRoll();



int rps_game(char handGuess, char cpuGuess);

void room3(void);
void mysteryItemGame(void);


int room10bad(int num);
int room10Red(int red);
int room10Blue(int blue);


void case16(void);

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
				char arr[2][10] = {"Ka", "Boom"};

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
							else if(roll >=11 && roll < 20)
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
							puts("A very familiar looking sword that would only be weilded by a man in a green tunic...");
							roll = RM12DiceRoll();
							printf("\n You rolled a %d\n", roll);

							if(roll == 1)
							{
								puts("Critical Failure");
								printf("\n");
								puts("Your lack of sword training and world saving causes you to trip on air and get impaled by your own sword");
								puts("The last thing you see is the pack of wolves snickering at your death");
								printf("\n");
								puts("*********");
								puts("*FAILURE*");
								puts("*********");
								printf("\n");
								puts("Someone should really hide that sword better");
								printf("\n");
								puts("A bright flash emminates, and your alive once more. As if seemingly in a loop...");
							}
							else if(roll == 20)
							{
								puts("NAT 20!?");
								printf("\n");
								puts("Somehow, you get hit with a flashback showcasing a professional swordsman!");
								puts("Your body, almost as if instinctively, mimics your vision");
								puts("The wolves are cut down one by one in a series of swift slashes");
								printf("\n");
								puts("*********");
								puts("*SUCCESS*");
								puts("*********");
								printf("\n");
								puts("Standing atop a mountain of corpses, you look at your sword");
								puts("Wondering how many more beasts you must fell to leave this accursed room");
								puts("Then you remember your already at the end! And head over to open the door");
								puts("Only to be met with a familiar scene...");
								printf("\n");
								cleared = 1;
							}
							else if(roll <= 10)
							{
								puts("Failure");
								printf("\n");
								puts("Sword in one hand, sword in the other...");
								puts("Wait why are you holding the sword with two hands?");
								puts("A generational fumble on your part, holding the sword in such a manner caused you to swing innacurately!");
								puts("The sword pierces a wolf, but then ricochets back towards your own neck!");
								printf("\n");
								puts("*********");
								puts("*FAILURE*");
								puts("*********");
								printf("\n");
								puts("I'm not sure thats how physics work, but i dont care");
								printf("\n");
								puts("A bright flash emminates, and your alive once more. as if seemingly in a loop..."); 


							}
							else if(roll >=11)
							{
								puts("Success");
								printf("\n");
								puts("Gripping the sword with one hand, you enter what can only be described as an anime stance");
								puts("You readily charge the beasts and hack and slash your way to the door");
								puts("You suffer minor cuts but are victorious!");
								printf("\n");
								puts("*********");
								puts("*SUCCESS*");
								puts("*********");
								printf("\n");
								puts("You set the sword aside(for plot reasons) and head into the door");
								puts("Only to be met with a familiar scene...");
								printf("\n");
								cleared = 1;
							}

							break;
						case 3:
							//code
							puts("You pull out a wind-up monkey with a peculiar design");
							roll = RM12DiceRoll();
							printf("\n You rolled a %d\n", roll);

							if(roll == 1)
							{
								puts("Critical Failure!");
								printf("\n");
								puts("You go with the flow and wind up the monkey");
								puts("But the monkey starts making a ticking sound...");
								puts("Surely it's not what you think...");
								printf("%s", arr[0]);
								printf("\n");
								printf("%s", arr[1]);
								printf("\n");
								puts("Instant darkness engulfs you");
								printf("\n");
								puts("*********");
								puts("*FAILURE*");
								puts("*********");
								printf("\n");
								puts("It was, in fact, what you thought it was");
								printf("\n");
								puts("A bright flash emminates, and your alive once more. As if seemingly in a loop...");
							}
							else if(roll == 20)
							{
								puts("NAT 20!?");
								printf("\n");
								puts("You crank that monkey at mock speed and hurl it towards the wolves");
								puts("The monkey emits blue sparks as it prepares to eviscerate the wolf pack");
								puts("You hear maniacal laughter in your head, as if some blue haired figure somewhere was proud");
								puts("The monkey explodes");
								puts("You lay unharmed, having taken cover behind a dense tree");
								printf("\n");
								puts("*********");
								puts("*SUCCESS*");
								puts("*********");
								printf("\n");
								puts("OH THE MISERY, EVERYBODY WANTS TO BE MY ENEMYYY!");
								printf("\n");
								puts("You triumphantly strut to the door and head inside");
								puts("Only to be met with a familar scene...");
								printf("\n");
								cleared = 1;
							}
							else if(roll <= 10)
							{
								puts("Failure");
								printf("\n");
								puts("You wind up the monkey, unsure of what it may do");
								puts("The monkey starts clapping its cymbals and screaming out");
								puts("Your not much of a thinker, so you charge head first into the wolves with the monkey");
								puts("Theres a word that perfectly describes your actions... Kamikaze");
								puts("The monkey explodes and wipes out the wolves... along with anything else in a 10 mile radius");
								puts("You included");
								printf("\n");
								puts("*********");
								puts("*FAILURE*");
								puts("*********");
								printf("\n");
								puts("Someone needs to go back to bomb safety school");
								printf("\n");
								puts("A bright flash emminates, and your alive once more. As if seemingly in a loop...");
							}
							else if(roll >=11)
							{
								puts("Success?");
								printf("\n");
								puts("You wind up the monkey, in hopes it was evil monkey...");
								puts("Then the monkey started bustin a move");
								puts("It was funky monkey");
								puts("You and the wolves were left in confusion");
								printf("\n");
								puts("************");
								puts("*No Contest*");
								puts("************");
								printf("\n");
								puts("Maybe theres a way to win... if only you roll 20");
								printf("\n");
								puts("A bright flash emminates, but nothing happens? Lets just take it from the top.");
							}
							break;
						case 4:
							//code
							puts("You take out a walkie talkie, time to make a call!");
							roll = RM12DiceRoll();
							printf("\n You rolled a %d\n", roll);

							if(roll == 1)
							{
								puts("Critical Failure");
								printf("\n");
								puts("You turn on the walkie talkie");
								puts("Theres no signal...");
								puts("I mean you are stuck in a liminal space, a walkie talkie aint gonna reach someone");
								puts("Yadda, Yadda, the wolves pounce and eat you");
								printf("\n");
								puts("*********");
								puts("*FAILURE*");
								puts("*********");
								printf("\n");
								puts("A walkie talkie requires 2 holders you know");
								printf("\n");
								puts("A bright flash emminates, and your alive once more. As if seemingly in a loop...");
							}
							else if(roll == 20)
							{
								puts("NAT 20!?");
								printf("\n");
								puts("You turn on the walkie talkie in hopes of getting a response");
								puts("Which you did recieve");
								puts("But who you recieved it from was not something anyone could have expected...");
								puts("it was...");
								puts("Inspector Gadget!");
								puts("Yes thats right, Inspector Gadget from the 1980's show");
								puts("He pulls out his gizmoos and thingamabobs to put an end to the wolves");
								puts("In a family friendly way of course");
								printf("\n");
								puts("*********");
								puts("*SUCCESS*");
								puts("*********");
								printf("\n");
								puts("Go Gadget Go *chorus* Go Gadget Go!");
								printf("\n");
								puts("Your friend bids you farewell and you enter the door");
								puts("Only to be met with a familiar scene...");
								printf("\n");
								cleared = 1;
							}
							else if(roll <= 10)
							{
								puts("Failure");
								printf("\n");
								puts("You turn on the walkie talkie and try tuning it to a functional channel");
								puts("You then realized you've never used a walkie talkie before");
								puts("The wolves weren't just gonna wait around forever you know");
								puts("You get mauled while trying to make sense of the walkie talkie");
								printf("\n");
								puts("*********");
								puts("*FAILURE*");
								puts("*********");
								printf("\n");
								puts("Must've never earned your walkie talkie scout badge");
								printf("\n");
								puts("A bright flash emminates, and your alive once more. As if seemingly in a loop...");
							}
							else if(roll >=11)
							{
								puts("Success");
								printf("\n");
								puts("You turn on the walkie talkie and you hear someones voice on the other side");
								puts("No... it was the walkie talkie itself speaking to you!");
								puts("The walkie talkie leaps out your hand and pulls out a bazooka");
								puts("It points towards the wolves and says 'Hasta la vista, baby' as it proceeds to fire off a rocket");
								puts("The wolves are nothing but specs of dust now, and the walkie talkie is nothing more than a brick");
								printf("\n");
								puts("*********");
								puts("*SUCCESS*");
								puts("*********");
								printf("\n");
								puts("Must've been the wind");
								printf("\n");
								puts("You make your way to the door admist your confusion and head inside");
								puts("Only to be met with a familiar scene...");
								printf("\n");
								cleared = 1;
							}
							break;
						case 5:
							//code
							puts("A gun, you pulled out a gun");
							roll = RM12DiceRoll();
							printf("\n You rolled a %d\n", roll);

							if(roll == 1)
							{
								puts("Critical Failure");
								printf("\n");
								puts("You had the barrel pointing the wrong way :>");
								puts("You pulled the trigger and iced yourself");
								puts("Congradulations, pick the most boring option, get the most boring fail");
								printf("\n");
								puts("*********");
								puts("*FAILURE*");
								puts("*********");
								printf("\n");
								puts("Dont pick the gun in a fantasy setting");
								printf("\n");
								puts("A bright flash emminates, and your alive once more. As if seemingly in a loop...");
							}
							else if(roll == 20)
							{
								puts("NAT 20!?");
								printf("\n");
								puts("You must've thought there would be a good outcome");
								puts("Well no, you pull out the gun and place it on the ground");
								puts("You and the wolves now engage in the most instense game of russian roulette");
								puts("Don't ask me how a wolf holds a gun but the results weren't pretty");
								puts("Only 1 wolf was left standing...");
								puts("Yes... YOU WERE THE WOLF");
								puts("You put on the skin and flesh of your victims as a trophy");
								puts("Then, before you could get to the door, you contracted rabies and perished");
								printf("\n");
								puts("*********");
								puts("*FAILURE*");
								puts("*********");
								printf("\n");
								puts("I would put some reference or witty pun here but uh, i just dont want u to win with a gun");
								printf("\n");
								puts("A bright flash emminates, likely the muzzle flash, but regardless, you stand once more");
								puts("As if seemingly in a loop...");
							}
							else if(roll <= 10)
							{
								puts("Failure");
								printf("\n");
								puts("No");
								puts("The gun dissipates in the air as soon as you pull it out");
								puts("And the wolves are looking rather famished");
								puts("You become their dinner and THEY left through the door");
								puts("The irony");
								printf("\n");
								puts("*********");
								puts("*FAILURE*");
								puts("*********");
								printf("\n");
								puts("Must've lost the 50/50");
								printf("\n");
								puts("A bright flash emminates, and your alive once more. As if seemingly in a loop...");
							}
							else if(roll >=11)
							{
								puts("Failure");
								printf("\n");
								puts("Wait... you thought it would be a success?");
								puts("Why would i let you win with the easy way out?");
								puts("As you pull out the gun, you realize it's a melt ray");
								puts("When you pull the trigger, the gun melted");
								puts("The wolves simply stared at you in disappointment");
								puts("They didn't even feel like you were worth the effort anymore");
								puts("But, they still couldn't let you leave, alive that is");
								puts("So u got eaten, again, and again, and again");
								printf("\n");
								puts("*********");
								puts("*FAILURE*");
								puts("*********");
								printf("\n");
								puts("Choose a real option :>");
								printf("\n");
								puts("A dimmly lit nightlight emminates, and your mostly alive again");
								puts("As if seemingly in a slightly different yet very similar loop...");
							}
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
				room20();
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
				room24();
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
    int attempts=4;
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
		   case 2:{
                puts("\nYou search the room and find a dusty old book. Inside, you discover the first code is revealed to you!");
                printf("The first code is %d. Now guess the second code.\n", randomCode1);

                printf("Enter your guess for the second code: ");
                scanf("%d", &guess2);

                if(guess2==randomCode2){
                    puts("\nYou guessed correctly! The chest opens, and you escape with the treasure!");
                    return;
                }else{
                    attempts--;
                    printf("Wrong guess! . You have %d attempt(s) left.\n", attempts);
                }
                break;
            }

            case 3:{
                puts("\nThe spirit guarding the room appears and says: 'Answer my riddle, and I shall reveal one of the codes.'");
                puts("Riddle: 'I speak without a mouth and hear without ears. I have no body, but I come alive with the wind. What am I?'");
                char answer[50];
                scanf("%s", answer);

                if(strcasecmp(answer, "echo")==0){
                    printf("Correct! The first code is %d. Now guess the second code.\n", randomCode1);
                    printf("Enter your guess for the second code: ");
                    scanf("%d", &guess2);

                    if(guess2==randomCode2){
                        puts("\nYou guessed correctly! The chest opens, and you escape with the treasure!");
                        return;
                    } else {
                        attempts--;
                        printf("Wrong guess!. You have %d attempt(s) left.\n", attempts);
                    }
                } else {
                    puts("Wrong answer! You wasted your time.");
                }
                break;
            }

            case 4:{
                puts("\nYou attempt to escape through the door. You have one attempt to guess the correct number (1-10).");
                printf("Enter your guess: ");
                scanf("%d", &guess1);

                if(guess1 ==randomCode1){
                    puts("\nThe door opens, and you escape! You leave the room victorious!");
                    return;
                }else{
                    puts("\nThe door remains locked. You drowned!");
                    return;
                }
                break;
            }

            case 5:{
                puts("\nYou try to pry open the chest with a knife. There’s a 50/50 chance of success...");
                int knifeAttempt=rand() % 2; // Randomly determine success or failure
                if(knifeAttempt==1){
                    puts("You succeed in opening the chest! The gold is yours, and you escape!");
                    return;
                }else{
                    puts("The knife breaks, and the chest remains locked and you drown.");
                    return;
                }
                break;
            }

            default:
                puts("Invalid choice. Try again.");
                break;
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

//======================================================================================



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
void room20(void)
{
	int subChoice = 0; // Variable for choices within the room
	int playAgain = 1; // Variable to determine if the player wants to replay the room
	const char* endings[] =
	{
		"ENDING 1: Eternal peace, but your legacy is lost.",
		"ENDING 2: Survival with future risks.",
		"ENDING 3: Victory with a heavy price.",
		"ENDING 4: Balance is disrupted, but the world is saved.",
		"ENDING 5: Eternal protection at the cost of humanity.",
		"ENDING 6: Fragile peace, but turmoil brews.",
		"ENDING 7: The world is safe but vulnerable.",
		"ENDING 8: Chaos reigns despite victory.",
		"ENDING 9: Victory, but you lose control of the future.",
		"ENDING 10: Corruption through power.",
		"ENDING 11: A powerful victory with uncertain stability.",
		"ENDING 12: Chaos through mistrust, and a hero’s tragic demise.",
		"ENDING 13: Victory at the cost of the Flame.",
		"ENDING 14: Victory at the cost of your soul.",
		"ENDING 15: Bound by dark ambitions.",
		"ENDING 16: Fragile victory with lingering threats."
	};

	puts("Your eyes flash white from opening the door.");
	puts("Your vision clears and the setting around you has changed. Surrounded by green plains and a village in the distance.");
	puts("A rustling is heard from a bush nearby, and a mysterious figure steps forward, the air thick with anticipation.");
	puts("'An ancient evil awakens,' they warn. 'You must seek the Eternal Flame to thwart its rise.'");

	puts("What do you do?");
	puts("1. Accept the quest to find the Eternal Flame.");
	puts("2. Refuse the quest, dismissing the warning from this stranger.");

	scanf("%d", &subChoice);

	switch (subChoice)
	{
	case 1: // Path A: The Path of Courage
		puts("You accept the quest. The mysterious figure nods and hums approvingly.");
		puts("They hand you a map marked with a glowing symbol. 'Follow this path to your destiny.'");
		puts("You wonder breifly if this was the correct choice. But now is the time for action.");
		puts("You look towards the buildings in the near distance, and then back down at your newly acquired map.");

		puts("What is your choice?");
		puts("1. Explore to potentially seek guidance from the village for advice.");
		puts("2. Set off immediately, trusting your instincts and follow the map.");

		scanf("%d", &subChoice);

		if (subChoice == 1)
		{ // Path A1: Guided by Wisdom
			puts("You follow a paved trail that leads you to the village. The trek was quick and uninterupted.");
			puts("This town was off course of the flowing symbol in your map. But gaining knowledge is oaramount to success! You hope.");
			puts("An elder approaches you once you step into the area. Almost expecting you...");
			puts("He wore a cloak, a rich blue but tattered, a white beard long enough to reach his chest.");
			puts("'I have been expecting you, traveler.' He spoke with a kind and familiar tone. 'You wish to find the Eternal Flame, yes?'");
			puts("He gives a good hearty chuckle after you nod. 'I haven't heard of that legend is so long...'");
			puts("You explain to the elder what your quest is and showing off the map with its glowing symbol.");
			puts("'I see... Well! If you want to take your sweet time, follow your original path here. But I know a shortcut, haha!'");
			puts("As he laughed, he pointed his finger to your map, highlighting a new purple path to the glowing symbol.");
			puts("There you have it, traveler. Just know, the shorter path will bring you more challenges, but time is of the essence!");

			puts("What is your choice?");
			puts("1. Follow the original path on the map to the mountain where a relic of the Eternal Flame is hidden.");
			puts("2. Follow a shortcut the elder mentions, though it seems more perilous.");
			scanf("%d", &subChoice);
			if (subChoice == 1)
			{ // Path A1-1
				puts("You decide to follow the original path, trusting the map’s glowing guidance.");
				puts("The trail is steep, winding through dense forests and rugged terrain.");
				puts("The air grows cooler as the trees thin, revealing a towering mountain shrouded in mist.");
				puts("It took a long while, but you finally see what the map pointed you to.");
				puts("At the summit lies an ancient temple, its stone walls etched with glowing runes.");
				puts("As you approach, the massive doors creak open, revealing a chamber bathed in golden light.");
				puts("A guardian of stone and fire steps forward, its fiery eyes fixed on you.");
				puts("'To claim the relic of the Eternal Flame, you must prove your worth,' it declares.");
				puts("Its appearance is draconic, but no larger than a bear. The guardian's scales were made of stone, cracked with age.");
				puts("Out of those cracks seeped flames, an enchanting yet intimidating orange glow.");
				puts("'You must prove yourself to be a warrior with a fiery spirit, if you want this relic. Give it your best shot!'");
				puts("The draconic guardian roared out. Now, to test your wit or strength, traveler.");

				puts("What will you do?");
				puts("1. Solve the guardian’s riddle to proceed.");
				puts("2. Fight the guardian, risking injury but potentially earning its respect.");
				scanf("%d", &subChoice);

				if (subChoice == 1)
				{ // Path A1-1-1
					puts("The guardian speaks in a deep rumble: 'Answer this: I am not alive, yet I grow. I don’t have lungs, but I need air. What am I?'");
					puts("You take a moment to think, recalling the lessons of your past adventures.");
					puts("With confidence, you reply: 'Fire.'");
					puts("The guardian nods, its fiery eyes dimming. 'You are wise and worthy,' it declares as the chamber doors swing open.");
					puts("Inside lies the relic, pulsating with an inner light. As you grasp it, power surges through you.");
					puts("You channel the Flame’s energy to seal the ancient evil forever, ensuring peace.");
					puts("But in doing so, your existence is erased from history, a sacrifice that secures the world’s future.");
					puts(endings[0]);
				}
				else if (subChoice == 2)
				{ // Path A1-1-2
					puts("You square off against the guardian, its fiery glow intensifying as it lunges forward.");
					puts("The battle is fierce, the guardian’s stony claws clashing against your weapon with resounding force.");
					puts("Despite the odds, your determination and skill prevail, and the guardian yields.");
					puts("'You are indeed a warrior of fire,' it rumbles, stepping aside.");
					puts("Beyond the guardian lies the relic, bathed in sacred light. You claim it, feeling its immense power.");
					puts("With the relic’s energy, you unleash the Flame upon the ancient evil, defeating it.");
					puts("The world is saved, but the Flame’s power lies dormant, a shadow of its former self.");
					puts(endings[1]);
				}
			}
			else if (subChoice == 2)
			{ // Path A1-2
				puts("You decide to take the shortcut, heeding the elder’s advice to save time.");
				puts("The path leads you through a dark forest, where the trees twist unnaturally and block out the light.");
				puts("Shadows seem to move in the corners of your vision, and the air grows heavy with tension.");
				puts("Eventually, the forest gives way to a hidden cavern, its entrance marked by glowing purple runes.");
				puts("Inside, the air is damp and filled with the sound of dripping water echoing endlessly.");
				puts("The path splits into two challenges, each leading deeper into the cavern.");
				puts("You wonder briefly if that elder was helping or derailing you. Either way, time is of the essence!");

				puts("What will you do?");
				puts("1. Navigate a maze of traps using wit and luck.");
				puts("2. Confront a lurking beast guarding the exit.");
				scanf("%d", &subChoice);

				if (subChoice == 1)
				{ // Path A1-2-1
					puts("The maze is a treacherous gauntlet of spinning blades, shifting walls, and hidden pitfalls.");
					puts("The air is thick with an unnatural darkness, and you feel an unseen presence watching your every move.");
					puts("As you progress, the traps grow more intricate, as if the maze itself is alive, adapting to your movements.");
					puts("Finally, you reach the heart of the maze. In its center, a great shadow looms, coalescing into the form of a beast.");
					puts("It growls, its voice reverberating through the cavern: 'You dare to challenge me in my domain?'");
					puts("With quick thinking, you activate the traps, turning the maze’s deadly mechanisms against the beast.");
					puts("The ground shakes as the creature howls, its form disintegrating into wisps of darkness.");
					puts("With the Flame’s relic, you imprison the ancient evil forever within the maze. Yet, the land above is cursed, haunted by whispers of the battle fought below.");
					puts(endings[2]);
				}
				else if (subChoice == 2)
				{ // Path A1-2-2
					puts("As you venture deeper into the cavern, an oppressive aura fills the air.");
					puts("The shadows ahead seem to move with purpose, coalescing into a massive beast with glowing red eyes.");
					puts("It growls, its voice a deep rumble: 'I am the darkness you seek to destroy. Step forward, if you dare.'");
					puts("The beast lunges, and the cavern shakes with the force of its movements. Its claws slash at the air, and its roar echoes off the stone walls.");
					puts("The battle is grueling, every strike pushing you closer to the edge of exhaustion. But you press on, fueled by determination.");
					puts("Finally, with a decisive blow, you harness the strength of the Flame’s relic, channeling its energy into the beast.");
					puts("The creature collapses, its form dissipating into shadow. The world is saved, but balance is disrupted, as the beast’s defeat unleashes chaos into the natural order.");
					puts(endings[3]);
				}
			}

		}
		else if (subChoice == 2)
		{ // Path A2: Relying on Instinct
			puts("You step off the beaten path, letting your instincts guide you.");
			puts("The forest thickens, the trees towering above, their branches twisting like skeletal fingers.");
			puts("The air feels heavy, charged with an unseen force, and you hear distant whispers carried on the wind.");
			puts("Finally, you come to a fork in the trail, each path promising a different fate.");

			puts("What will you do?");
			puts("1. Follow a well-trodden trail marked with strange symbols.");
			puts("2. Explore an unmarked route, sensing an invisible pull.");
			scanf("%d", &subChoice);
			if (subChoice == 1)
			{ // Path A2-1
				puts("The trail leads to a mystical grove, its air filled with the faint glow of bioluminescent plants.");
				puts("A ring of ancient trees surrounds a shimmering pool, their bark etched with symbols of fire and light.");
				puts("The spirits of the forest emerge, their translucent forms floating gracefully above the ground.");
				puts("They regard you with curiosity, their voices like a harmonious song.");

				puts("What will you do?");
				puts("1. Speak with the forest spirits, earning their guidance.");
				puts("2. Steal an artifact from the grove, risking their wrath.");
				scanf("%d", &subChoice);
				if (subChoice == 1)
				{ // Path A2-1-1
					puts("You bow respectfully, addressing the spirits with humility.");
					puts("'Great spirits of the forest,' you say, 'I seek your guidance to vanquish the ancient evil.'");
					puts("The spirits exchange glances before nodding. 'If you are willing, we shall bond with the Flame to shield the world eternally.'");
					puts("You merge with the Flame and spirits, creating an eternal barrier against the evil.");
					puts("The price is steep, as your humanity fades away, leaving you a guardian bound to the grove for eternity.");
					puts(endings[4]);
				}
				else if (subChoice == 2)
				{ // Path A2-1-2
					puts("Tempted by the artifact's glow, you approach the sacred pool and grasp the relic.");
					puts("The spirits’ song turns to a mournful wail, their forms darkening as wrath overtakes them.");
					puts("You flee with the artifact, using its power to weaken the ancient evil.");
					puts("Though victorious, chaos spreads in the wake of the spirits' anger, as the balance of the forest is shattered.");
					puts(endings[5]);
				}
			}
			else if (subChoice == 2)
			{ // Path A2-2
				puts("The unmarked route leads you deeper into the forest, where sunlight barely penetrates.");
				puts("You come upon an ancient shrine, its surface worn by time, yet its power still palpable.");
				puts("The relic within the shrine radiates energy, and a choice lies before you.");

				puts("What will you do?");
				puts("1. Restore the shrine to unlock its secrets.");
				puts("2. Destroy the shrine, unleashing its hidden power.");
				scanf("%d", &subChoice);

				if (subChoice == 1)
				{ // Path A2-2-1
					puts("With careful reverence, you restore the shrine, aligning its stones and reigniting its inscriptions.");
					puts("A surge of energy flows into the Flame, amplifying its strength.");
					puts("You use this power to defeat the ancient evil, but the shrine's energy is drained, leaving the Flame powerless for future threats.");
					puts(endings[6]);
				}
				else if (subChoice == 2)
				{ // Path A2-2-2
					puts("You strike the shrine, shattering its structure and releasing its immense power.");
					puts("The energy floods into you, amplifying the Flame, which you use to annihilate the ancient evil.");
					puts("But the unleashed magic destabilizes the world, throwing it into chaos.");
					puts(endings[7]);
				}
			}
		}
		break;
	case 2: // Path B: The Path of Resistance
		puts("You scoff at the mysterious figure, dismissing their warnings as the ramblings of a stranger.");
		puts("The figure shakes their head solemnly. 'You cannot escape what is meant to be,' they whisper, before vanishing into the shadows.");
		puts("That night, your sleep is plagued by nightmares—visions of a burning village, shadowy forms stalking the land, and the anguished cries of those you care about.");
		puts("You awaken to find the village consumed by chaos, strange events unfolding before your very eyes.");

		puts("What will you do?");
		puts("1. Investigate the mysterious events happening in this village.");
		puts("2. Flee the village, escaping the spreading danger.");
		scanf("%d", &subChoice);

		if (subChoice == 1)
		{ // Path B1: Investigating the Village
			puts("Determined to uncover the truth, you stay behind, navigating through the chaos of this once-peaceful village.");
			puts("The streets are filled with eerie silence, save for the occasional whispered voice that seems to echo from nowhere.");
			puts("You discover two suspicious figures who may hold the answers to what is happening.");

			puts("What will you do?");
			puts("1. Confront the suspicious traveler who arrived the same day as the warnings.");
			puts("2. Question a local villager who seems to know more than they’re sharing.");
			scanf("%d", &subChoice);

			if (subChoice == 1)
			{ // Path B1-1: Traveler
				puts("You follow the faint sounds of hurried footsteps to an alley where the traveler frantically stuffs supplies into a weathered bag.");
				puts("They freeze as you approach, their eyes darting like a cornered animal. 'I—I was just leaving,' they stammer.");
				puts("When pressed, they reveal they know of the Eternal Flame and the ancient evil plaguing the land.");
				puts("'I can lead you to the Flame,' they say, a glimmer of desperation in their voice. 'But you must trust me. Together, we can end this.'");

				puts("What will you do?");
				puts("1. Trust the traveler to wield the Flame, leading to victory but ceding control over its future.");
				puts("2. Betray the traveler, taking the Flame and defeating the evil but becoming corrupted by its power.");
				scanf("%d", &subChoice);

				if (subChoice == 1)
				{ // Path B1-1-1
					puts("You decide to trust the traveler, following their guidance through the village’s hidden paths.");
					puts("Their knowledge proves invaluable as you navigate through shadowy alleys and evade the spreading chaos.");
					puts("Together, you locate the Flame’s resting place and unleash its power, vanquishing the ancient evil.");
					puts("But the traveler’s intentions soon become clear—they wield the Flame not for the world’s good, but for their own ambitions.");
					puts("You watch as they rise to power, their control of the Flame reshaping the future in ways you never intended.");
					puts(endings[8]);
				}
				else if (subChoice == 2)
				{ // Path B1-1-2
					puts("Your distrust festers as the traveler leads you to the Flame. Once it is within reach, you turn on them.");
					puts("In a brutal moment of betrayal, you seize the Flame for yourself, leaving the traveler mortally wounded.");
					puts("With its immense power, you vanquish the ancient evil, but the Flame’s energy corrupts your soul.");
					puts("Your triumph becomes a hollow one as the darkness you sought to destroy takes root within you.");
					puts(endings[9]);
				}
			}
			else if (subChoice == 2)
			{ // Path B1-2: Villager
				puts("You find the villager hunched over in a dimly lit room, their hands trembling as they clutch an ancient tome.");
				puts("When you confront them, they recoil, their voice barely a whisper: 'You shouldn’t have come here...'");
				puts("After much hesitation, they reveal a hidden passage beneath the village, claiming it leads to the source of the chaos.");
				puts("But their eyes betray a secret, something they’re not telling you.");

				puts("What will you do?");
				puts("1. Enter the passage, braving its dangers.");
				puts("2. Press the villager for more information, risking conflict.");
				scanf("%d", &subChoice);

				if (subChoice == 1)
				{ // Path B1-2-1
					puts("You descend into the hidden passage, the air growing colder with each step.");
					puts("The walls are lined with cryptic carvings, and faint whispers seem to emanate from the darkness.");
					puts("At the end of the passage, you discover a forgotten weapon, glowing faintly with the power of the Flame.");
					puts("With this weapon, you confront and destroy the ancient evil, its form dissolving into shadows.");
					puts("However, the weapon’s unstable energy causes rifts to appear in the land, threatening the fragile peace.");
					puts(endings[10]);
				}
				else if (subChoice == 2)
				{ // Path B1-2-2
					puts("You press the villager for the truth, your frustration boiling over as they evade your questions.");
					puts("Finally, in a moment of desperation, they lash out, revealing their allegiance to the ancient evil.");
					puts("The battle is fierce, the villager using forbidden magic to summon shadowy creatures.");
					puts("You manage to defeat them, but not without grave consequences—their dark power engulfs the room.");
					puts("As the walls collapse, you realize too late that the evil’s influence has spread beyond the village.");
					puts("You perish in the destruction, your sacrifice buying the world precious time to prepare for the evil’s return.");
					puts(endings[11]);
				}
			}
		}

			else if (subChoice == 2)
			{ // Path B2: Escaping the Village
				puts("Overwhelmed by fear as chaos engulfs this once-peaceful village, you decide to flee.");
				puts("The streets crackle with unnatural energy, shadowy figures emerging from the corners of your vision.");
				puts("You run until you reach the outskirts of the village, where two paths lie ahead—a decision must be made.");

				puts("Where will you go?");
				puts("1. Seek refuge in the nearby woods, risking the unknown.");
				puts("2. Head toward an abandoned castle, hoping its walls will provide safety.");
				scanf("%d", &subChoice);

				if (subChoice == 1)
				{ // Path B2-1: The Woods
					puts("You plunge into the woods, the air thick with mist and the faint rustle of unseen creatures.");
					puts("The ancient trees loom over you, their gnarled branches intertwining to block out the moonlight.");
					puts("In the heart of the woods, you stumble upon a cursed glade, its center dominated by a glowing figure trapped within a shimmering barrier of light.");
					puts("The trapped spirit’s eyes lock onto yours, a mix of desperation and hope evident in their ethereal gaze.");

					puts("What will you do?");
					puts("1. Free the trapped spirit, seeking their guidance to vanquish the evil.");
					puts("2. Absorb the spirit’s power, using it to enhance your own strength.");
					scanf("%d", &subChoice);

					if (subChoice == 1)
					{ // Path B2-1-1
						puts("You kneel before the spirit, whispering a prayer of release as you break the shimmering barrier.");
						puts("The spirit emerges, their form now radiant and whole. They thank you with a solemn nod.");
						puts("'With my freedom comes the power to banish the darkness,' they declare.");
						puts("Channeling the Flame’s energy through the spirit, you watch as the ancient evil is consumed in a burst of light.");
						puts("The world is saved, but at a great cost—the Flame’s power is extinguished forever, leaving the world vulnerable to future threats.");
						puts(endings[12]);
					}
					else if (subChoice == 2)
					{ // Path B2-1-2
						puts("You approach the trapped spirit, your intentions clear. As you place your hand on the barrier, the spirit’s eyes widen in fear.");
						puts("'What are you doing?' they cry, but it’s too late—their power flows into you, a searing energy that ignites your very soul.");
						puts("With the spirit’s strength now yours, you confront the ancient evil, destroying it in a blaze of glory.");
						puts("But the victory is hollow. The spirit’s essence lingers, twisting your soul into something unrecognizable.");
						puts("The world is safe, but you are lost, consumed by the darkness you sought to defeat.");
						puts(endings[13]);
					}
				}
				else if (subChoice == 2)
				{ // Path B2-2: The Abandoned Castle
					puts("You make your way to the abandoned castle, its silhouette stark against the night sky.");
					puts("The crumbling walls and empty towers whisper of forgotten battles and lost glory.");
					puts("As you step through the broken gates, an enigmatic figure greets you, cloaked in shadows.");
					puts("'Welcome, traveler,' they say, their voice a smooth mixture of charm and menace. 'I know why you’re here.'");
					puts("They claim to hold knowledge of the Flame and its power, offering to assist you in exchange for an alliance.");

					puts("What will you do?");
					puts("1. Ally with the figure, trusting their offer of support.");
					puts("2. Betray the figure, taking their resources for yourself.");
					scanf("%d", &subChoice);

					if (subChoice == 1)
					{ // Path B2-2-1
						puts("You accept the figure’s offer, wary but desperate. Together, you delve into the depths of the castle.");
						puts("They reveal hidden chambers, filled with ancient texts and forgotten artifacts, culminating in the discovery of the Flame.");
						puts("With their guidance, you wield the Flame to defeat the ancient evil, its dark form obliterated by your combined efforts.");
						puts("But their ambition is clear. The Flame is now theirs to command, and they bind you to their dark schemes.");
						puts("Though the world is saved, you find yourself a pawn in a new, sinister future.");
						puts(endings[14]);
					}
					else if (subChoice == 2)
					{ // Path B2-2-2
						puts("You feign trust, following the figure into the castle’s depths. At the moment of discovery, you strike.");
						puts("Your betrayal is swift and ruthless, leaving the figure powerless as you seize the Flame.");
						puts("With its immense power, you vanquish the ancient evil, the shadows scattering into nothingness.");
						puts("But the betrayal comes at a cost. The castle’s secrets unravel, revealing hidden threats that will soon emerge.");
						puts("The peace you fought for is fragile, and the world’s future is uncertain.");
						puts(endings[15]);
					}
				}
			}
			break;

	default:
		puts("The mysterious figure waits for your answer, their eyes piercing your soul...");
		}
		puts("The room fades back to the central chamber, leaving you pondering your choice.");

		// Replay Option
		puts("Do you want to play again?");
		puts("1. Yes");
		puts("2. No");
		scanf("%d", &playAgain);

		if (playAgain != 1)
		{
			// Add optional random flavor text when leaving
			int randomChance = rand() % 3; // 1 in 3 chance
			if (randomChance == 0)
			{
				puts("A sinister laugh echoes in your mind: 'You cannot escape your destiny...'");
			}
			puts("You decide to leave room 20, your choices etched in fate.");
		}
	}

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



void case16()
{
	printf("------------------------------\n");
	printf("Welcome to room 16. This room is full of riddles and quizes. You need to solve all of them to escape from here\n");
	printf("Your first quest starts now. \nGuess the square of the following number\n");

	int random_number = rand() % 10;
	printf("The number is %d\n", random_number);
	printf("\n");
	int guess;
	scanf("%d", &guess);
	if (guess == random_number ^ 2)
	{
		printf("You seem to be smart not onto next one\n");
	}else
	{
		printf("You got that wrong. You are thrown out from the room\n");
		return;
	}

	printf("------------------------------\n");

	printf("Now next quest, I will give you some clue, If you guess correct, You can pass onto next one\n");
	printf("From the given details, guess the animal\n");
	printf("I am found in the deserts of Africa and the Middle East. I have long legs and a hump on my back, which helps me survive long periods without water. I am known for my ability to carry heavy loads and am often called the 'Ship of the Desert.'\n");
	char animal[30];
	scanf("%s", animal);
	if (strcmp(animal, "camel") == 0 || strcmp(animal,"Camel") == 0)
	{
		printf("You guessed correct. The animal was camel\n");
	}
	else
	{
		printf("You are not intelligent enough. Return to the main hall\n");
		return;
	}

	printf("------------------------------\n");

	printf("Now Geography question, Guess the capital of Australia\n");
	printf("a) Sydney\nb) Melbourne\nc) Canberra\nd) Brisbane\n");

	char answer;
	scanf(" %c", &answer);
	if (answer == 'c')
	{
		printf("You seem to have good geography knowledge. Now onto next question\n");
	}
	else
	{
		printf("You failed on the third stage");
		return;
	}


	 printf("------------------------------\n");

	 printf("This is tricky now. Pay attention\n");
	 printf("What is the total of all the number multiplied on a telephone number pad\n");
	 int guessTotal;
	 scanf("%d", &guessTotal);
	 if (guessTotal == 0)
	 {
	 	printf("You have good knowledge in Maths too!. Great. Now the last one\n");
	 }
	 else
	 {
	 	printf("You failed in simple maths problem");
		return;
	 }


	  printf("------------------------------\n");

	  char *items[] = {"Apple","Banana","Cherry","Chocolate","Grapes"};
	  printf("Here are some items. Find the odd one to get yourself out of this room\n");
	  int num_items = sizeof(items) / sizeof(items[0]);

	  for (int i = 0; i< num_items;i++)
	  {
	  	printf("%d) %s\n", i, items[i]);
	  }

	  int input;
	  scanf("%d", &input);

	  if (input == 3)
	  {
	  	printf("You passed every test i presented. You are now released from this trap");
	  }
	  else
	  {
		  printf("You failed this test now you will have to choose in between other rooms");
		  return;
	  }



}


//======
void room24(void) {
    int choice, treasureCount = 0;
    int treasures[5] = {0}; // Array to track found treasures
    char playAgain;

    printf("Welcome to Room 24! You see a mysterious cavern with five paths to explore.\n");

    do {
        printf("\nChoose a path to explore:\n");
        printf("1. The glittering tunnel.\n");
        printf("2. The dark abyss.\n");
        printf("3. The roaring waterfall.\n");
        printf("4. The enchanted forest.\n");
        printf("5. The ancient ruins.\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5) {
            if (treasures[choice - 1]) {
                printf("You've already explored this path and claimed the treasure!\n");
            } 
		else {
                srand(time(NULL));
                int outcome = rand() % 3; // Random encounter (0 = danger, 1 = treasure, 2 = nothing)

                switch (outcome) {
                    case 0:
                        printf("Oh no! You encounter a trap and barely escape unscathed.\n");
                        break;
                    case 1:
                        printf("Congratulations! You found a hidden treasure.\n");
                        treasures[choice - 1] = 1;
                        treasureCount++;
                        break;
                    case 2:
                        printf("You find nothing but dust and cobwebs.\n");
                        break;
                }
            }
        } 
	else {
            printf("Invalid choice. Try again.\n");
        }

        printf("\nTreasures collected: %d/5\n", treasureCount);

        if (treasureCount < 5) {
            printf("Would you like to explore another path? (y/n): ");
            scanf(" %c", &playAgain);
        } 
	else {
            printf("You've collected all the treasures in Room 24! Great job!\n");
            playAgain = 'n';
        }
    } 
	while (playAgain == 'y');

    printf("Exiting Room 24. Returning to the main hall.\n");
}
//========

