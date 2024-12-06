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

int RM12DiceRoll();





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


int RM12DiceRoll()
{
	srand(time(NULL));

	//random # from 1-20
	int diceroll = 1 + (rand() %20);
	
	return diceroll;
}

