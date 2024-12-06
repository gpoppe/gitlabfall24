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

void room11Challenge(void);



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
			 room11Challenge(); //this will call out room 11 to play the game in this room 
//Cecilia
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
