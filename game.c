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

//For room 7 function prototype requirement
// "make sure to include a function prototype at the beginning of the program."

void room7evaluate_grade(int room7points);

// End of Room 7's Functions



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

			case 7:

                // Alexis Jennar Gonzaga`s Boss Room aka Room 7/Case 7
                            {
                                // Points tracker for this room only should be right?
                                int room7points = 0; 
                                int room7choice = 0, room7subChoice = 0;

                                // Cheese way for an Array for Room 7 descriptions cause idk what else to do for Arrays WIP
                                // You must use at least one loop, "one array", and a random number.
                                
                                char *room7Descriptions[] = {
                                    "\nYou entered room 7 and find yourself in a CSC 321 class.",
                                    "A Phantom of Professor Garret Looms over, Blocking the entrance you came in and appears and says: 'To escape this room, you must pass the class!'",
                                    "I hope you remembered the syllabus grading scale"
                                    // ... add more descriptions if needed
                                };

                                // Ascii art Test
                                puts("");
                                puts("Welcome to room 7");
                                puts("");
                                printf("          _            _             _            _             _       _              \n");
                                printf("        /\\ \\          / /\\         /\\ \\         /\\ \\          /\\ \\     / /\\            \n");
                                printf("       /  \\ \\        / /  \\       /  \\ \\       /  \\ \\        /  \\ \\   / /  \\           \n");
                                printf("      / /\\ \\ \\      / / /\\ \\__   / /\\ \\ \\     / /\\ \\ \\      / /\\ \\ \\ /_/ /\\ \\          \n");
                                printf("     / / /\\ \\ \\    / / /\\ \\___\\ / / /\\ \\ \\   / / /\\ \\ \\     \\/_/\\ \\ \\\\_\\/\\ \\ \\         \n");
                                printf("    / / /  \\ \\_\\   \\ \\ \\ \\/___// / /  \\ \\_\\  \\/_/\\_\\ \\ \\        / / /     \\ \\ \\        \n");
                                printf("   / / /    \\/_/    \\ \\ \\     / / /    \\/_/    __\\___ \\ \\      / / /       \\ \\ \\       \n");
                                printf("  / / /         _    \\ \\ \\   / / /            / /\\   \\ \\ \\    / / /  _      \\ \\ \\      \n");
                                printf(" / / /________ /_/\\__/ / /  / / /________    / /_/____\\ \\ \\  / / /_/\\_\\    __\\ \\ \\___  \n");
                                printf("/ / /_________\\\\ \\/___/ /  / / /_________\\  /__________\\ \\ \\/ /_____/ /   /___\\_\\/__/\\ \n");
                                printf("\\/____________/ \\_____\\/   \\/____________/  \\_____________\\/\\________/    \\_________\\/ \n");
                                printf("                                                                                        \n");
                                puts("");


                                    //Present the 5 options to the player Requirement
                                    //The user must be able to make five choices/decisions to pursue (not one choice with five options).
                                    while (room7choice != 99)
                                    {
                                        // Displaying the room and the options

                                        puts("");
                                        puts(room7Descriptions[0]);
                                        puts(room7Descriptions[1]);
                                        puts(room7Descriptions[2]);
                                        puts("");



                                        puts("");
                                        puts("\nWhat will you do?");
                                        puts("1. Study.");
                                        puts("2. Complete Assignments.");
                                        puts("3. Work in a Team.");
                                        puts("4. Use AI.");
                                        puts("5. Rely on Sheer Will.");
                                        puts("99. Quit.");
                                        printf("Enter your choice: ");
                                        scanf("%d", &room7choice);
                                        puts("");


                                        // 5 Player's choices all rng based, gonna make the user spam alot for that grade if they figure out the ranges
                                        switch (room7choice) 
                                        {
                                            // Study route / Choice 1
                                            case 1: 
                                                puts("\nYou choose to study. How do you proceed?");
                                                puts("1. Study seriously for hours.");
                                                puts("2. Skim your notes quickly.");
                                                puts("3. Try to recall the material from memory.");
                                                printf("Enter your choice: ");
                                                scanf("%d", &room7subChoice);

                                                // Rng sub choices 
                                                if (room7subChoice == 1) 
                                                {
                                                    if (rand() % 2) 
                                                    {
                                                        room7points += 10;
                                                        puts("");
                                                        puts("⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⢰⣾⣿⣿⣿⣦⠀⠀⠀⠀⢀⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⣀⣀⣀⡀⠀⠀");
                                                        puts("⠀⠀⢻⣿⣿⣿⣿⣿⠀⠘⠛⠛⢻⣿⣿⠟⠿⠶⠶⠶⡦⠀⣾⣿⣿⣿⣿⡆⠀⠀");
                                                        puts("⠀⠀⠈⠻⠿⠿⠟⠃⠀⠀⠀⢠⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⡟⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⠿⠿⠋⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣦⠀⢰⣿⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⠀⠙⢋⡙⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⠇⠀⠀⡉⢉⡀⠀⢠⣄⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⠀⠚⠀⠻⠟⠀⠁⢸⣿⡄⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠛⠛⠂⠒⠛⠃⠘⣿⣿⡄⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠻⠿⠿⠿⠿⢀⣾⣿⠟⠁⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⣆⠐⣶⡖⢠⣿⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⣿⡆⠙⢁⣾⣿⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⣿⣿⠇⠀⢸⣿⣿⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠛⠛⠋⠀⠀⠀⠛⠛⠛⠂⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("Success! You feel like you can take on the Exam!. (+10 points)");
                                                        puts("");
                                                    } 

                                                    else 
                                                    {
                                                        room7points -= 5;
                                                        puts("");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⣿⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⣿⣿⣿⣿⣆⢳⡀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣿⣿⣿⣿⣿⣿⣿⣾⣷⡀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠠⣄⠀⢠⣿⣿⣿⣿⡎⢻⣿⣿⣿⣿⣿⣿⡆⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⢸⣧⢸⣿⣿⣿⣿⡇⠀⣿⣿⣿⣿⣿⣿⣧⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣾⣿⣿⣿⣿⠃⠀⢸⣿⣿⣿⣿⣿⣿⠀⣄⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⢠⣾⣿⣿⣿⣿⣿⠏⠀⠀⣸⣿⣿⣿⣿⣿⡿⢀⣿⡆⠀");
                                                        puts("⠀⠀⠀⠀⠀⢀⣴⣿⣿⣿⣿⣿⣿⠃⠀⠀⠀⣿⣿⣿⣿⣿⣿⠇⣼⣿⣿⡄");
                                                        puts("⠀⢰⠀⠀⣴⣿⣿⣿⣿⣿⣿⡿⠁⠀⠀⠀⢠⣿⣿⣿⣿⣿⡟⣼⣿⣿⣿⣧");
                                                        puts("⠀⣿⡀⢸⣿⣿⣿⣿⣿⣿⡟⠀⠀⠀⠀⠀⣸⡿⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿");
                                                        puts("⠀⣿⣷⣼⣿⣿⣿⣿⣿⡟⠀⠀⠀⠀⠀⠀⢹⠃⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿");
                                                        puts("⡄⢻⣿⣿⣿⣿⣿⣿⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⣿⣿⣿⣿⣿⠇");
                                                        puts("⢳⣌⢿⣿⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠻⣿⣿⣿⣿⣿⠏⠀");
                                                        puts("⠀⢿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⣿⣿⣿⠋⣠⠀");
                                                        puts("⠀⠈⢻⣿⣿⣿⣿⣿⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣵⣿⠃⠀");
                                                        puts("⠀⠀⠀⠙⢿⣿⣿⣿⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⣿⣿⡿⠃⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠙⢿⣿⣿⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⡿⠋⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠈⠛⠿⣿⣦⣀⠀⠀⠀⠀⢀⣴⠿⠛⠁⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠓⠂⠀⠈⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("");
                                                        puts("Failure! You overstudied and got burned out. (-5 points)");
                                                        puts("");
                                                    }
                                                } 

                                                else if (room7subChoice == 2) 
                                                {
                                                    if (rand() % 2) 
                                                    {
                                                        room7points += 5;
                                                        puts("");
                                                        puts("       __...--~~~~~-._   _.-~~~~~--...__");
                                                        puts("    //               `V'               \\");
                                                        puts("   //                 |                 \\");
                                                        puts("  //__...--~~~~~~-._  |  _.-~~~~~~--...__\\");
                                                        puts(" //__.....----~~~~._\\ | /_.~~~~----.....__\\");
                                                        puts("====================\\\\|//====================");
                                                        puts("                    `---`");

                                                        puts("Success! Skimming helped you remember key concepts. (+5 points)");
                                                        puts("");

                                                    } 

                                                    else

                                                    {
                                                        room7points -= 5;
                                                        puts("");
                                                        puts("⣤⡶⠛⣉⣋⠛⠻⣿⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⡟⠀⣾⣿⣿⣿⠀⢻⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⣷⡀⣘⡿⣷⠟⢀⣼⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠿⠟⠿⣽⡇⢰⣟⡃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⣤⣤⣴⡦⠀");
                                                        puts("⠀⠀⠀⣸⣇⣸⣯⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣠⣤⣤⣤⣤⣦⣤⣤⣄⣀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡾⠋⣡⣤⣧⡈⠹⡗");
                                                        puts("⠀⠀⠀⣷⡏⠀⢹⣷⠀⠀⠀⠀⢀⣠⣴⣾⣿⠿⠶⠞⢛⣫⣭⣭⣝⣽⣿⣿⣿⣿⣻⡛⢦⣄⡀⠀⠀⠀⠀⠀⠀⢨⣅⠀⣿⣾⣟⡿⠀⣹");
                                                        puts("⠀⠀⠀⠓⠛⠷⠟⠿⠀⠀⣤⣾⣿⠷⠛⠁⠀⣠⣴⣾⠿⠛⠛⠿⠛⠉⠉⠉⠙⠋⠙⠛⠷⣮⣳⣆⡀⠀⠀⠀⠀⠀⠉⢿⡯⠟⠛⢁⣠⡟");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⣤⣾⡿⠋⠀⠀⠀⣰⣾⠿⠋⠀⠀⠀⠀⠀⠀⠀⠂⠀⠀⠙⣦⠀⠀⠀⠙⢮⡿⣄⠀⠀⠀⠀⣤⣾⠁⣴⢾⡿⠟⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⢀⣼⣷⠏⠀⠤⠈⢀⣾⡿⠋⠀⠀⠀⠀⢸⡃⠀⠈⠀⡀⠀⠠⠀⠸⣇⠀⠀⠀⠀⢻⣞⢧⡀⠀⢸⡷⠛⢶⣿⡛⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⢀⣾⣳⠏⠀⢀⠂⢀⣿⡟⠀⢀⡄⠀⠀⢀⣿⠀⠀⠀⢰⠇⠀⠐⠀⠀⣿⡀⠀⠀⢳⡀⠹⣏⣷⠀⢚⣷⣀⣤⡿⠁⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⢸⣿⡟⠀⢈⠀⠀⣼⡟⠀⠀⣇⠀⠰⠚⢛⡯⠁⠐⠀⢸⠆⠀⠈⠀⠀⢹⡏⠑⠀⠈⣷⠀⢹⣟⡇⠀⠉⠉⠁⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⣿⣿⠃⠀⢂⠀⢠⣿⠁⠀⠐⣿⠀⠀⠀⣾⡇⠀⠐⠀⣹⠆⠃⠈⠀⢠⡞⣷⠀⠀⠀⢿⡀⠈⣿⣿⠄⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⢀⣿⣿⠀⡀⠂⠄⣸⡿⠀⠀⢈⣿⠀⠀⠀⣿⣗⠀⢀⠀⣽⡆⠁⠀⠀⢰⣏⣿⡃⠀⠀⢸⡇⠀⣻⣽⣧⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⢸⡏⣟⠀⠠⢁⠢⢸⡏⠀⠁⢈⣷⠀⠀⠐⣿⣿⠀⠀⠀⣿⡇⣶⠀⠀⢸⣧⣟⣇⠀⠀⣿⡇⢠⡜⣧⢿⡀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⣸⣷⣏⠀⣷⠛⠀⣿⡇⠀⠀⢈⣿⣀⣠⣴⣿⣿⣻⣤⡴⣿⣧⡿⣤⢦⣾⣷⣿⣿⣶⣶⣿⡇⠈⣿⡹⣯⣇⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⣽⣽⠃⢰⡏⠁⣸⣿⡇⠀⡀⠠⣿⣿⣿⣿⣿⣿⣿⣍⠁⠀⠀⠀⠀⠀⣹⣿⣿⣷⣬⡽⢿⡇⠀⣹⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⣼⣿⡟⠀⣾⠃⢀⣾⣿⣿⠀⡁⠀⣿⠀⢻⣿⣿⣾⣿⣿⠀⠀⠀⠄⠀⠀⢸⣿⣿⣿⣿⠇⣿⠀⣷⣿⣿⡏⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⣿⣹⠀⢰⣿⠀⢨⣟⡿⣽⡆⠀⡀⢿⡀⠈⠻⠾⣽⠟⠃⠀⠀⠀⠀⡁⠀⠀⠙⠛⠋⠁⡘⣷⠀⢿⣿⣽⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⣿⣿⠀⢸⡿⡀⠈⡿⣷⢸⡇⢻⡄⢺⡅⠐⢄⢠⠀⢀⠀⠈⠀⠈⠀⠀⠈⠀⠄⢂⠂⡑⠀⣿⠆⣻⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⣿⣽⡆⠘⣿⣷⡀⢱⠻⣦⣟⠸⣇⠼⣇⠈⠄⠠⠈⠀⡀⠄⠀⠄⠀⠄⢀⠁⠠⠀⠀⣀⣴⡟⠡⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠈⢳⣹⣆⡹⣶⢋⡔⢣⢜⣻⣎⣿⢀⢿⣄⣀⠀⠁⠀⠀⠀⠀⠀⡄⠀⠀⣀⣠⣤⡶⣿⡏⢄⣷⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⢹⣯⢻⣯⣷⣬⣃⢾⡣⢿⣞⣧⢚⣿⠛⠻⠿⢶⣶⣶⣶⣶⣾⢿⣛⠻⣭⣓⣶⣿⡇⢎⣿⣿⣿⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠘⢻⣿⣬⣿⣿⣿⣿⣾⡿⣯⢿⣏⣿⡌⠱⢌⠆⡆⣌⣩⠳⠙⢷⣾⣿⣻⢿⣿⣾⣙⢾⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⡨⢒⣹⣿⣿⣿⣿⡿⢃⣽⣿⡿⣿⣞⣷⠯⠶⡼⣴⣤⣤⣤⣤⠾⣿⣿⣿⡿⣯⣿⣼⣿⣿⡾⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⣀⡀⢠⡾⢿⣯⣿⣿⣧⣸⣿⣯⣿⠁⠀⠉⠉⠀⢀⣀⣀⣀⣠⣀⠀⠀⠙⢿⣶⣟⣿⣿⣾⣶⣟⣁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("");
                                                        puts("Failure! Last Minute Skimming left you confused. (-5 points)");
                                                        puts("");

                                                    }

                                                } 

                                                else if (room7subChoice == 3) 
                                                {
                                                    if (rand() % 2) 
                                                    {
                                                        room7points += 5;
                                                        puts("");
                                                        puts("⠷⣭⡀⠙⠿⢿⣿⣿⣿⣿⣿⣇⠙⠮⡀⠙⢿⣿⡿⠀⡵⣈⣏⣣⣴⣭⣭⣭⣿⣯⣛⣛⠋⣡⠎⠄⠈⢉⣴⡿⣫⣴⣿⣿⣿⣿⣿⣿⣿⣿");
                                                            puts("⣤⣀⠉⠓⠦⢄⡈⠉⠙⠻⢿⣿⣷⡄⠘⠃⠀⣀⣤⣶⣿⣿⢿⣿⣿⣿⣿⣿⡿⣿⣿⣿⣿⣿⡷⢀⣴⠟⠋⢠⣿⣿⣿⣿⣿⡿⠿⢛⣫⡵");
                                                            puts("⣿⣿⣿⣶⣦⣤⣈⠙⠢⢄⡀⠉⠛⠋⠀⢀⣾⣿⡿⣿⣿⢿⣯⣭⢿⣷⢫⣿⣽⡳⢼⣟⣿⣏⣴⣿⣿⣶⣷⣹⢿⠿⠛⣋⣥⢴⣞⣫⣵⣾");
                                                            puts("⠿⠿⣿⣿⣿⣿⣿⣿⣶⣄⡈⠉⠐⢀⣴⣿⣿⢯⣿⣟⣾⣯⣷⡔⠾⣏⣛⡧⢏⣱⡻⣽⣾⣿⣿⣿⣿⣿⣿⣿⣦⠞⢋⣩⣴⡿⣭⢭⡹⢿");
                                                            puts("⣶⣶⣦⣤⣭⣡⣀⣈⡉⠙⠋⢀⣴⣿⣿⣿⢫⣿⣟⣮⣿⣳⣯⢿⡄⢋⡿⢩⡶⢭⣷⣿⡟⣷⣯⣿⣽⣟⣿⣿⣿⣏⠻⣟⢾⣿⣿⣿⣽⣶");
                                                            puts("⣶⣿⣿⣭⣽⣛⡛⠛⠛⠛⣰⣿⣿⣿⣿⣾⣿⣟⣾⢯⣷⣿⣟⣯⣷⡋⢣⣤⣿⡿⢏⠱⡌⢸⣰⣏⣽⣾⣿⣿⣿⣿⡓⢿⣿⣻⣿⣿⣿⠿");
                                                            puts("⠿⠿⠿⠛⠛⢋⡉⠀⠐⣿⣿⣿⣿⡿⣿⣻⣽⣟⣻⡿⣿⣿⣿⣿⢯⢿⣯⣛⠡⠶⢿⠻⡿⠻⡟⢯⣛⣿⡞⣿⣿⣿⡇⠀⢀⣉⠞⡙⢎⢡");
                                                            puts("⣍⣉⣉⣉⣉⣉⡀⠀⠀⣿⣿⣿⣿⣿⢳⡟⢏⠚⢉⠝⢯⣿⣻⣯⣏⡐⠈⠛⢿⣦⣤⡷⣧⢄⢻⢨⣷⣾⢿⣻⣷⣿⠇⠠⢼⡿⣿⣶⣾⣿");
                                                            puts("⣿⣿⣿⣿⣿⣿⡟⠀⢸⣿⣿⢿⣿⣧⢼⣇⣺⡶⢋⣾⡿⣾⣽⡉⣄⢈⣁⠲⠤⣾⠟⣻⢿⡿⣿⣿⣻⡾⠟⣿⣻⣿⠀⠉⠑⠒⠲⠶⠬⣭");
                                                            puts("⣿⣿⠿⠟⠛⠉⠀⠀⣿⠟⣯⣿⢷⣚⠏⣹⣦⡿⢏⣳⣟⠩⠌⢁⠀⢈⢉⢡⣳⠋⠜⣿⡌⢟⣷⣻⣽⠃⣸⣿⣿⡟⠀⠀⠘⠷⣾⣶⣾⣷");
                                                            puts("⢁⡠⠤⠒⠊⠉⠀⠠⣿⣾⢿⡹⢯⣿⠾⢛⣥⣢⡽⢤⣚⠑⠂⢠⠾⡲⠞⣉⢹⣿⡚⡼⣿⣞⣋⢿⡝⠀⣽⣿⣿⠃⠈⠒⢦⣄⡈⠉⠻⣿");
                                                            puts("⠀⠀⠀⠀⠀⠀⠀⠀⠛⢿⣶⠖⠋⣁⠲⠛⢿⣷⣳⢤⣸⢷⣋⡄⢸⣥⣶⢼⣟⣻⣽⣇⣠⣺⣟⠏⣠⣾⣿⢿⣏⣠⠆⠀⣀⡀⠉⠙⠲⢼");
                                                            puts("⠀⣄⡖⣬⡐⠀⣀⣠⠔⠊⠁⠀⠘⣰⣮⣝⣂⠀⠈⠭⠉⠀⠈⠉⢹⠛⠛⠯⣿⡞⢿⠺⣷⣾⢋⣼⡿⠻⢂⡤⠘⢿⡰⠀⠘⢿⣿⣶⣦⣤");
                                                            puts("⠸⣼⣿⣷⣿⣿⠋⠀⠀⡐⢀⡏⠀⠀⠉⠙⢻⠋⠃⠀⢀⠀⠀⠀⠈⠌⠀⠀⠹⣷⠜⡇⠻⣿⡏⠵⠀⠁⣟⠂⠀⡀⠈⠳⢄⡀⠙⠿⣿⣿");
                                                            puts("⣼⣿⣿⣿⡿⣿⠩⠄⠀⡇⣸⠃⠀⠀⠀⠀⠲⠌⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠣⠄⢹⡀⠙⡿⡌⠀⠀⠁⢀⠀⠀⣴⣄⡀⠙⢦⣄⠘⠻");
                                                            puts("⠉⠀⠢⢁⠋⠔⠁⠀⠀⢸⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠠⠀⢇⠀⡙⠆⠀⠌⠀⠃⢀⣼⣿⣿⣿⣷⣄⡈⠳⣆");
                                                            puts("⣤⣄⠀⠀⠀⠠⠀⣠⡆⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠠⡁⠆⠸⡆⠀⣭⡀⡀⠀⢠⣿⣿⣿⣿⣿⣿⣿⣿⣄⡈");
                                                            puts("⣿⣿⣿⣶⣶⣶⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⠐⡀⠆⠱⢈⠀⢹⣄⠋⣿⡇⢰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷");
                                                            puts("⣿⣿⣿⣿⣿⣿⣿⣿⣦⠀⠠⢶⠀⠐⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⡐⠈⠄⠡⠐⣈⠰⠁⠀⡀⢻⠀⢿⢃⣀⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿");
                                                            puts("⣿⣿⣿⣿⣿⣿⣿⣿⡿⠁⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢈⠠⠁⠂⠄⠂⢁⠜⠁⢸⣇⠀⠂⠹⣄⠙⢿⣿⣿⣿⣿⣿⣿⣿⣿");
                                                            puts("⣿⣿⣿⣿⣿⣿⣿⠟⠀⠀⠀⢠⡁⠀⠀⠠⠀⠀⠀⠀⠀⠀⠀⢀⠐⡀⠠⠈⠄⢁⠴⠉⠀⠀⠀⢿⡀⠀⠀⠘⠲⣄⠙⢿⣿⣿⣿⣿⣿⣿");
                                                            puts("⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠈⡏⠉⠓⠀⠀⠀⠀⠀⠀⢀⠐⠀⠂⠀⢁⣠⠞⠉⠀⠀⠀⠐⡀⠸⣧⠀⠀⠀⠁⠈⠱⣀⠘⠻⢿⣿⣿⣿");
                                                            puts("⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠘⢆⡀⠀⠀⠀⠀⠀⠀⢀⣀⣤⡴⠾⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⢻⣇⠀⡀⠀⠀⠁⠈⠡⢂⡀⠙⢿⣿");
                                                            puts("⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠉⠂⠰⠀⠀⠐⡂⠀⣶⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⡀⠸⣿⣆⠸⢅⠠⠀⠀⠀⠈⠰⢀⠀⠹");
                                                            puts("⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⡅⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠒⡀⢀⣿⣿⡀⠈⡐⠀⠀⠀⠀⠀⠀⠁⢂");
                                                        puts("");
                                                        puts("Success! Galaxy Brain you gotta be gifted. (+5 points)");
                                                        puts("");

                                                    } 

                                                    else 
                                                    {
                                                        room7points -= 10;
                                                        puts("");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ⢀⣤⣤⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣴⣶⣄⠀");
                                                        puts("⠀⠀⠀⣾⣿⣷⡀⠀⠀⠀⠀⠸⣿⣿⣿⣄⠀⠀⠀⠀⠀⣠⣴⣾⣿⣿⣿⣿⡿⠀");
                                                        puts("⠀⠀⠀⠻⣿⣿⣿⣦⡀⠀⠀⠀⠹⣿⣿⣿⣆⠀⠀⢀⣾⣿⣿⣿⠿⠛⠋⠁⠀⠀");
                                                        puts("⠀⠀⠀⠀⠙⢿⣿⣿⣿⣆⠀⠀⠀⠙⣿⣿⣿⣧⠀⣾⣿⣿⡿⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⢻⣿⣿⣿⠀⠀⣠⣴⣿⣿⣿⣿⣷⣿⣿⡿⠁⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⣾⣿⣿⣿⣴⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⢿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⢀⣴⣾⣿⣷⣦⡹⣿⣿⣿⣿⣿⠟⠉⠀⠀⠀⢀⣤⣾⣿⣆⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⣾⣿⣿⣿⣿⣿⣷⠘⣿⣿⣿⣿⣷⣦⣄⣠⣾⣿⣿⣿⣿⠟⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠻⣿⣿⣿⣿⣿⠏⠀⠀⠉⠛⠿⢿⣿⣿⣿⣿⣿⠟⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠈⠛⠛⠋⠁⠀⠀⠀⠀⠀⠀⠀⠈⠙⠛⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("");
                                                        puts("Failure! You already forgot what you ate last week (-10 points)");
                                                        puts("");
                                                    }

                                                } 
                                                else 
                                                {
                                                    puts("");
                                                    puts("Invalid choice.");
                                                    puts("");
                                                }
                                                break;


                                            // Lab / Choice 2
                                            case 2: 
                                                puts("\nYou choose to complete an Lab. Choose which one?");
                                                puts("1. Python Lab.");
                                                puts("2. C+ Lab.");
                                                puts("3. Java Lab.");
                                                printf("Enter your choice: ");
                                                scanf("%d", &room7subChoice);

                                                if (room7subChoice == 1) 
                                                {
                                                    if (rand() % 2) 
                                                    {
                                                        room7points += 10;
                                                        puts("");
                                                        puts("    Y");
                                                        puts("  .-^-.");
                                                        puts(" /     \\      .- ~ ~ -.");
                                                        puts("()     ()    /   _ _   `.                     _ _ _");
                                                        puts(" \\_   _/    /  /     \\   \\                . ~  _ _  ~ .");
                                                        puts("   | |     /  /       \\   \\             .' .~       ~-. `.");
                                                        puts("   | |    /  /         )   )           /  /             `.`.");
                                                        puts("   \\ \\_ _/  /         /   /           /  /                `'");
                                                        puts("    \\_ _ _.'         /   /           (  (");
                                                        puts("                    /   /             \\  \\");
                                                        puts("                   /   /               \\  \\");
                                                        puts("                  /   /                 )  )");
                                                        puts("                 (   (                 /  /");
                                                        puts("                  `.  `.             .'  /");
                                                        puts("                    `.   ~ - - - - ~   .'");
                                                        puts("                       ~ . _ _ _ _ . ~");
                                                        puts("Success! You solved the Python Lab. (+10 points)");
                                                        puts("");
                                                    } 

                                                    else 
                                                    {
                                                        room7points -= 10;
                                                        puts("");
                                                        puts("        ---_ ......._-_--.");
                                                        puts("      (|\\ /      / /| \\  \\");
                                                        puts("      /  /     .'  -=-'   `.");
                                                        puts("     /  /    .'             )");
                                                        puts("   _/  /   .'        _.)   /");
                                                        puts("  / o   o        _.-' /  .'");
                                                        puts("  \\          _.-'    / .'*|");
                                                        puts("   \\______.-'//    .'.' \\*|");
                                                        puts("    \\|  \\ | //   .'.' _ |*|");
                                                        puts("     `   \\|//  .'.'_ _ _|*|");
                                                        puts("      .  .// .'.' | _ _ \\*|");
                                                        puts("      \\`-|\\_/ /    \\ _ _ \\*\\");
                                                        puts("       `/'\\__/      \\ _ _ \\*\\");
                                                        puts("      /^|            \\ _ _ \\*");
                                                        puts("     '  `             \\ _ _ \\");
                                                        puts("                       \\_");
                                                        puts("Failure! The Snake of the Python Lab Bit you. (-10 points)");
                                                        puts("");
                                                    }
                                                } 

                                                else if (room7subChoice == 2) 
                                                {
                                                    if (rand() % 2) 
                                                    {
                                                        room7points += 12;
                                                        puts("");
                                                        puts("              ");
                                                        puts("  ,----..   ");
                                                        puts(" /   /   \\  ");
                                                        puts("|   :     : ");
                                                        puts(".   |  ;. / ");
                                                        puts(".   ; /--`  ");
                                                        puts(";   | ;     ");
                                                        puts("|   : |     ");
                                                        puts(".   | '___  ");
                                                        puts("'   ; : .'| ");
                                                        puts("'   | '/  : ");
                                                        puts("|   :    /  ");
                                                        puts(" \\   \\ .'   ");
                                                        puts("  `---`   ");
                                                        puts("");
                                                        puts("Success! You dont C sharp tho. (+12 points)");
                                                        puts("");
                                                    } 

                                                    else 

                                                    {
                                                        room7points -= 10;
                                                        puts("");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⣶⣶⣦⣌⠙⠋⢡⣴⣶⡄⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⣿⣿⣿⡿⢋⣠⣶⣶⡌⠻⣿⠟⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⡆⠸⠟⢁⣴⣿⣿⣿⣿⣿⡦⠉⣴⡇⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⣿⠟⠀⠰⣿⣿⣿⣿⣿⣿⠟⣠⡄⠹⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⢸⡿⢋⣤⣿⣄⠙⣿⣿⡿⠟⣡⣾⣿⣿⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⣠⣴⣾⠿⠀⢠⣾⣿⣿⣿⣦⠈⠉⢠⣾⣿⣿⣿⠏⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⣀⣤⣦⣄⠙⠋⣠⣴⣿⣿⣿⣿⠿⠛⢁⣴⣦⡄⠙⠛⠋⠁⠀⠀⠀⠀");
                                                        puts("⠀⠀⢀⣾⣿⣿⠟⢁⣴⣦⡈⠻⣿⣿⡿⠁⡀⠚⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠘⣿⠟⢁⣴⣿⣿⣿⣿⣦⡈⠛⢁⣼⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⢰⡦⠀⢴⣿⣿⣿⣿⣿⣿⣿⠟⢀⠘⠿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠘⢀⣶⡀⠻⣿⣿⣿⣿⡿⠋⣠⣿⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⢿⣿⣿⣦⡈⠻⣿⠟⢀⣼⣿⣿⠟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠈⠻⣿⣿⣿⠖⢀⠐⠿⠟⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("");
                                                        puts("Failure! C Deez Nuts. (-10 points)");
                                                        puts("");
                                                    }

                                                } 

                                                else if (room7subChoice == 3) 
                                                {
                                                    if (rand() % 2) 
                                                    {
                                                        room7points += 15;
                                                        puts("");
                                                            puts("⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⣀⣀⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                            puts("⠀⠀⠀⠀⠀⠀⢀⣀⡿⠿⠿⠿⠿⠿⢿⣀⣀⣀⣀⣀⡀⠀⠀");
                                                            puts("⠀⠀⠀⠀⠀⠀⠸⠿⣇⣀⣀⣀⣀⣀⣀⣸⠿⢿⣿⣿⣿⡇⠀⠀");
                                                            puts("⠀⠀⠀⠀⠀⠀⠀⠀⠻⠿⠿⠿⠿⠿⣿⣿⣀⡸⠿⢿⣿⡇⠀⠀");
                                                            puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣤⣤⣿⣿⣿⣧⣤⡼⠿⢧⣤⡀");
                                                            puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣤⣤⣿⣿⣿⣿⠛⢻⣿⡇⠀⢸⣿⡇");
                                                            puts("⠀⠀⠀⠀⠀⠀⠀⠀⣤⣤⣿⣿⣿⣿⠛⠛⠀⢸⣿⡇⠀⢸⣿⡇");
                                                            puts("⠀⠀⠀⠀⠀⠀⢠⣤⣿⣿⣿⣿⠛⠛⠀⠀⠀⢸⣿⡇⠀⢸⣿⡇");
                                                            puts("⠀⠀⠀⠀⢰⣶⣾⣿⣿⣿⠛⠛⠀⠀⠀⠀⠀⠈⠛⢳⣶⡞⠛⠁");
                                                            puts("⠀⠀⢰⣶⣾⣿⣿⣿⡏⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠁⠀⠀");
                                                            puts("⢰⣶⡎⠉⢹⣿⡏⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                            puts("⢸⣿⣷⣶⡎⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                            puts("⠀⠉⠉⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                            puts("");
                                                        puts("Success! You played minecraft or something? (+15 points)");
                                                        puts("");
                                                    } 

                                                    else 
                                                    {
                                                        room7points -= 15;
                                                        puts("");
                                                        puts("                                                                QW U                        ");
                                                        puts("                      W                                                                       ");
                                                        puts("                      O L                                      Q                              ");
                                                        puts("                        FON                                 YN B                              ");
                                                        puts("                                                                                              ");
                                                        puts("                          S L                              L U                               ");
                                                        puts("                                                                                              ");
                                                        puts("                            QWU                          Y S                                 ");
                                                        puts("                                                                                              ");
                                                        puts("                                YNS  QOS WQN  YN   QY  U U                                  ");
                                                        puts("                                       Y   U   W   W   Y    Y                                ");
                                                        puts("                          N NQO QNOUSNNLWOQDYQYD Q HYS JUQ NSQ                               ");
                                                        puts("                        JUN LSN ONNUQNNJUNOBWNYB N DYN HUN JSN NO                            ");
                                                        puts("                      Y W Y Y Y  YY  YYY Y S Y S Y U Y W Y Y Y   Y                           ");
                                                        puts("                    SNN JUN LQS   FUQNNJUNQBYNYB N DYS   O JSN NONYU                        ");
                                                        puts("                                                                                              ");
                                                        puts("                   YNNY OUU QSS UNQWWONNYSQHYUYH W LYY NUW QSU UOQNN                        ");
                                                        puts("                                                                                              ");
                                                        puts("                   YQN  UU  YQY  NS  QOS WQN  YN   QY  UU  WS   OWOO                        ");
                                                        puts("                                                                                              ");
                                                        puts("                                                                                              ");
                                                        puts("       JHWNUL      W NN JUN LQN ONNUSNNJUNQBWNYB N DYN HUN JSN OONY        UNWA              ");
                                                        puts("       SU Y Q        YY W Y Y Y   Y  YYW Y S Y S Y U Y W Y Y Y Y Y         YY S Y           ");
                                                        puts("     QNNFWNUAYO    YSNN JUN LSN ONNUQNNJUNQBYNYB N DYN HUN JSN OONOQ     DFWNWB N H         ");
                                                        puts("                                                                                              ");
                                                        puts("    NNONLYSUFYJQ   YNNY OUW QQS UNQWUONNYQQHYUYH W JYY NUW QSU UOSNN    DAJYSWH WNNQ        ");
                                                        puts("                                                                                              ");
                                                        puts("    OOQNQ YUL AY   YQN  UU  YQY YNS  QOS WQN  YN   QY  UU  WS  YOWOO    FOO  WN  NQQ        ");
                                                        puts("            W                              Y   Y   Y                      Y   Y              ");
                                                        puts("    Y NNJWOUBYYY   Y NS LUQ NSO QNOUSNNLWOQDYQYD Q HYS JUQ NSQ QOOY     SOFYOWD QN Q        ");
                                                        puts("      NNFWNSAY Y   Y NN JUN LSN ONNUQNNJUNOBWNYB N DYN HUN JSN NONY     SLDWNUB NN Q        ");
                                                        puts("      YYW Y Q        YY W Y Y Y  Y   YYY Y S Y S Y U Y W Y Y Y   Y        U Y S YY          ");
                                                        puts("    QQNNFWNUAYWN   YSNN JUN LQN ONNUQNNJUNQBYNYB N DYN HUN LSN NONOQ    FADWNWB NNSQ        ");
                                                        puts("                                                                                              ");
                                                        puts("    NNONNYSUF HQ   YNN  OUW SQU UNQYWONOYSQHYUYJ Y LY  OUY QSU UOSNN    DBJYUWH YNNQ        ");
                                                        puts("                                                                                              ");
                                                        puts("    OOSNQ YUL A    YQN  UU  YQY  NS  QOS WQN  YN   QY  UU  WS   OWOO    FNO YWN  NQQ        ");
                                                        puts("        Y   U           Y              Y   U   U   W   Y                  W   U              ");
                                                        puts("    YQNNJWOUBYQ    Y NS LUQ NQO QNOUSNNLWOQDYQYD Q HYS LUQ NSQ QOOW     WDHWOWD Q F         ");
                                                        puts("        HWNU       Y NN JUN LQN ONNUQNNJUNQBYNYB N DYN HUN LSN NONY         NWA              ");
                                                        puts("       FY   F           Y              Y   U   U   W   Y   Y               Q  U Y           ");
                                                        puts("                   YSNN JUN LQN ONNUQNNJUNQBYNYB N DYN HUN JSN OONOQ                        ");
                                                        puts("                                                                                              ");
                                                        puts("                    SN  OUW SQU UNQYWONOYSQHYUYJ Y LY  OUY QSU UOS Y                        ");
                                                        puts("                                                                                              ");
                                                        puts("                         N  YQY YNS  QOS WQN  YN   QY  UU  WS                                ");
                                                        puts("                                                   W   Y                                     ");
                                                        puts("                             WW QNOUSNN Y       NQ HYS JU                                    ");
                                                        puts("                             SY ONNUQNN Y       NN DYN HS                                    ");
                                                        puts("                                                   W   Y                                     ");
                                                        puts("                             FO ONNUQNNQO      SNN DYN HL                                    ");
                                                        puts("                                                                                              ");
                                                        puts("                             NF UNQYWONNN      NNY LY  OOJ                                  ");
                                                        puts("                                                                                              ");
                                                        puts("                             WB  NS  QNOO      QN  QY  UUA                                  ");
                                                        puts("                                                   W   Y                                     ");
                                                        puts("                             UU QNOUSNN W       NQ HYS LU                                    ");
                                                        puts("                                ONNUQNN          N DYN H                                     ");
                                                        puts("                              Q        O        N  W   YY                                    ");
                                                        puts("                                SNNUQSS          U DYN O                                     ");
                                                        puts(""); 
                                                        puts("Failure! The droid is giving you a stare. (-15 points)");
                                                        puts("");
                                                } 
                                            }

                                                else 
                                                {
                                                    puts("Invalid choice.");
                                                }

                                                break;


                                            // Work in a Team / Choice 3 
                                            case 3: 
                                                puts("\nYou choose to work in a team. Who do you work with?");
                                                puts("1. Some Randos.");
                                                puts("2. The Shady Rumored Discord group.");
                                                puts("3. Go solo.");
                                                printf("Enter your choice: ");
                                                scanf("%d", &room7subChoice);

                                                if (room7subChoice == 1) 
                                                {
                                                    if (rand() % 2) 
                                                    {
                                                        room7points += 24;
                                                        puts("");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⡦⠤⣤⣤⣤⣤⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣴⣾⡿⢧⡵⠚⡛⠛⢶⡞⠮⣝⠲⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⡿⢟⡴⣿⡿⠿⣿⡿⡼⣷⣭⣳⡳⣌⠹⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⡿⢁⣿⣴⡿⢟⣿⡳⣿⣿⣦⣠⡿⣻⣿⠀⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⡟⢡⣾⢃⣟⣤⣿⣿⠉⠛⠻⠿⠧⣿⣿⣿⣷⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢾⣷⣿⣿⣿⡾⢋⣼⠃⠀⠀⠀⡇⠀⠀⠀⢸⣿⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣿⣿⣿⣾⣷⠏⠁⣠⠤⠤⣄⣇⠀⢀⠀⢘⣿⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⣿⣿⣿⣿⠇⠀⠘⠿⣿⣿⣷⣾⠇⠘⣶⣶⡿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⢿⣧⣽⣿⠀⠀⣀⠀⠀⠀⢸⣿⠀⠹⠿⡿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⣦⣦⣯⡿⢷⣄⣿⠀⠀⢠⣾⣿⣿⡆⠀⣣⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣸⣿⣿⢯⣼⣰⣿⢿⣷⣾⣿⣿⡋⣥⣃⣰⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠿⣛⡳⢿⣼⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⣀⠀⣀⣀⣀⣤⣴⣶⣶⣶⣶⣤⣾⣿⡇⠈⠻⣿⣿⣹⢿⣿⠇⡐⠲⡮⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⣀⣤⣶⣿⣿⣿⣿⢿⣿⣿⣿⣻⣿⣿⣯⣽⣿⣿⣿⠿⠛⢿⣿⠃⠀⠀⢢⣙⢿⣾⣿⣟⢛⡃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⢀⣼⣿⣿⠟⠿⣿⣿⣿⣿⡿⠿⢿⣯⣿⣟⣿⣿⣿⣿⠁⠀⠀⠀⣿⡆⠀⠀⠀⣿⡆⠈⠉⠟⠛⠊⠤⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⢠⣾⣿⠟⠁⠀⣾⣿⠋⠀⠀⠀⠀⠀⠀⠉⠙⠻⢿⣿⣿⣇⠀⠀⠀⢸⡇⠀⠀⣸⡟⠀⠀⠀⠀⠀⠀⠀⠀⠈⠳⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⢀⣿⣟⠁⠀⠀⢲⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⣿⣖⠀⠀⠀⣿⡄⣰⣿⠁⠀⢀⣤⠶⣂⡶⠀⠀⠀⠀⠈⠳⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⣼⣿⠀⠀⠀⠀⠀⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣿⣄⣀⣰⣿⣿⣿⠁⢀⡴⣟⣁⣴⣿⣡⠤⢤⣀⠀⠀⠀⠘⢆⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠻⣿⣆⠀⠀⠀⠀⠏⢿⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣿⣿⣿⣿⣿⣿⣿⣿⠿⠟⠛⠋⠀⠀⠀⠀⠈⠳⢄⠀⠀⠀⠙⠢⣄⠀⠀⠀⠀⠀");
                                                        puts("⠀⠹⣿⡀⠀⠀⠀⠠⢈⣳⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣿⣿⣿⣿⠟⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠳⣄⠀⠀⠀⠈⢣⡀⠀⠀⠀");
                                                        puts("⠀⠀⢸⣷⠀⠀⠀⣖⣾⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠳⡀⠀⠀⠀⠳⡄⠀⠀");
                                                        puts("⠀⠀⢸⡿⠃⡆⣶⣿⡿⢉⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢧⠀⠀⠀⠀⢹⡀⠀");
                                                        puts("⣀⣴⠟⠁⠀⢗⣾⣿⠁⢺⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡏⠀⠀⠀⠀⢀⡇⠀");
                                                        puts("⡏⠀⠀⢠⣶⠟⠉⢿⣤⣋⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⠀⠀⠀⠀⠀⣴⠃⠀⠀");
                                                        puts("⣅⣀⣾⡿⠋⠀⠀⠀⢻⣿⣿⣿⣬⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠀⢠⠀⠀⢸⠃⠀⠀⠀⠀⡼⠀⠀");
                                                        puts("⠿⠛⠉⠀⠀⠀⠀⠀⠀⠻⣿⣿⣿⣷⣄⠀⠀⠀⠀⠀⠀⣴⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠞⢹⣶⡟⠀⠀⠈⠶⣄⠀⠀⣾⠃⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⣿⣿⢿⣿⣿⣷⣶⣤⣤⣾⣿⣿⣿⣿⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠞⢁⣴⣿⣿⡇⠀⠀⠀⠀⠀⠀⠁⠸⡄⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⣿⣆⠙⠻⣿⣾⣿⣿⣿⣿⣿⢷⣽⣿⣦⣄⡀⠀⠀⠀⠀⢀⠞⠁⣴⡾⣿⠏⣿⠀⠀⠀⠀⠀⢲⠀⠀⠀⠹⡀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣟⢿⣦⣴⣿⠿⠛⠛⠛⠻⣿⡿⠿⠿⠿⣿⣿⣿⣷⣶⣤⣤⣯⣴⢿⡏⢹⡏⠀⢿⡇⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⡀⢹⣿⢁⣠⣤⣄⡀⠀⣿⠀⠀⠀⠀⠈⠙⢿⣿⡛⠛⢉⣩⠞⠉⢀⣼⡇⠀⠀⣿⡀⠀⠀⠀⠀⡄⠀⠀⠀⢸⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⣯⠳⢼⡿⠋⠉⠉⠉⠛⢷⣿⡶⠿⣶⣤⣤⣤⣾⣿⡅⠀⠟⠁⡰⢶⠃⠸⣿⣀⣀⣻⣧⠀⠀⠀⣴⠃⠀⠀⣸⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⢿⣆⢸⡇⠀⠀⠀⠀⠀⣨⣿⠁⠀⠀⠀⠀⠀⠀⠘⡇⠀⣴⠋⣠⢼⠀⠀⠹⣿⣿⡀⠻⣦⡀⠀⠻⡄⠀⠀⠚⢳⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⣿⡀⠻⣦⣿⣿⡷⠶⠾⠿⣻⣿⠛⠛⠒⠶⠶⠶⠶⢾⡇⠀⡤⠞⠁⡼⠀⠀⠀⢹⣿⣷⠾⣿⣿⠀⠀⢹⡄⠀⠀⣈⡇");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("");
                                                        puts("Success! The randos were pretty good. (+24 points)");
                                                        puts("");
                                                    } 

                                                    else {
                                                        room7points -= 10;
                                                        puts("");
                                                        puts("⡴⠒⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⠉⠳⡆⠀");
                                                        puts("⣇⠰⠉⢙⡄⠀⠀⣴⠖⢦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣆⠁⠙⡆");
                                                        puts("⠘⡇⢠⠞⠉⠙⣾⠃⢀⡼⠀⠀⠀⠀⠀⠀⠀⢀⣼⡀⠄⢷⣄⣀⠀⠀⠀⠀⠀⠀⠀⠰⠒⠲⡄⠀⣏⣆⣀⡍");
                                                        puts("⠀⢠⡏⠀⡤⠒⠃⠀⡜⠀⠀⠀⠀⠀⢀⣴⠾⠛⡁⠀⠀⢀⣈⡉⠙⠳⣤⡀⠀⠀⠀⠘⣆⠀⣇⡼⢋⠀⠀⢱");
                                                        puts("⠀⠘⣇⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⡴⢋⡣⠊⡩⠋⠀⠀⠀⠣⡉⠲⣄⠀⠙⢆⠀⠀⠀⣸⠀⢉⠀⢀⠿⠀⢸");
                                                        puts("⠀⠀⠸⡄⠀⠈⢳⣄⡇⠀⠀⢀⡞⠀⠈⠀⢀⣴⣾⣿⣿⣿⣿⣦⡀⠀⠀⠀⠈⢧⠀⠀⢳⣰⠁⠀⠀⠀⣠⠃");
                                                        puts("⠀⠀⠀⠘⢄⣀⣸⠃⠀⠀⠀⡸⠀⠀⠀⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠈⣇⠀⠀⠙⢄⣀⠤⠚⠁⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡄⠀⠀⠀⢹⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡀⠀⠀⢘⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⢰⣿⣿⣿⡿⠛⠁⠀⠉⠛⢿⣿⣿⣿⣧⠀⠀⣼⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡀⣸⣿⣿⠟⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⣿⡀⢀⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⡇⠹⠿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢿⡿⠁⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠻⣤⣞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢢⣀⣠⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠲⢤⣀⣀⠀⢀⣀⣀⠤⠒⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("");
                                                        puts("Failure! Nothing happened and nobody studied really?. (-10 points)");
                                                        puts("");
                                                    }
                                                } 

                                                else if (room7subChoice == 2) 
                                                {
                                                    if (rand() % 2) 
                                                    {
                                                        room7points += 5;
                                                        puts("");
                                                        puts("         ＿ _ _ _  ");
                                                        puts("　　　　　＞　　   フ ");
                                                        puts("　　　　　| 　_　 _ l   ");
                                                        puts("　 　　　／` ミ＿xノ  ");
                                                        puts("　　 　 /　　　 　 |");
                                                        puts("　　　 /　 ヽ　　 ﾉ");
                                                        puts("　 　 │　　|　|　|");
                                                        puts("　／￣|　　 |　|　|");
                                                        puts("　| (￣ヽ＿_ヽ_)__)");
                                                        puts("　＼二つ");
                                                        puts("Success! The Discord group actually had some helpful people. (+5 points)");
                                                        puts("");
                                                    } 

                                                    else 
                                                    {
                                                        room7points -= 100;
                                                        puts("");
                                                        puts("⠀⣰⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣶⠀");
                                                        puts("⠀⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣿⠀");
                                                        puts("⠀⡏⢿⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⢻⡇");
                                                        puts("⠀⡧⠘⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⠃⢸⡇");
                                                        puts("⠀⣿⠀⠈⢿⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡾⠁⠀⣾⠁");
                                                        puts("⠀⢿⡷⡀⠀⠹⣶⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⠀⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⠟⠀⢀⣤⣿⠀");
                                                        puts("⠀⠘⣧⢳⡀⠀⠈⠻⢷⣤⡀⠀⠀⠀⠀⠀⢲⣦⣴⣞⡛⠳⠶⠞⢛⣳⣤⣤⡖⠀⠀⠀⠀⠀⢀⣠⡾⠟⠁⠀⢀⡞⣼⠇⠀");
                                                        puts("⠀⠀⠹⣷⢿⡄⠀⠀⠀⠙⠿⣶⣤⣤⣶⣦⣾⣇⡀⠉⠙⢦⠀⠰⠋⠉⢀⡘⣿⣦⣶⣦⣤⣴⠿⠋⠁⠀⠀⢠⡾⣸⡏⠀⠀");
                                                        puts("⠀⠀⠀⠹⣮⢿⣆⠀⠀⠀⠀⠈⢻⣿⣿⡉⠙⠷⡝⣷⣤⠀⣷⠀⢤⣾⣻⡿⠋⢉⣿⣿⡟⠁⠀⠀⠀⠀⣠⡿⣱⠟⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠹⣷⣻⣧⡀⢀⣀⡴⣿⠃⠈⠙⠂⠀⠙⠾⣷⣾⣿⣷⣾⣿⡏⠀⠀⠋⠁⠘⣧⠳⣄⡀⢀⣴⢟⣽⠏⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠘⢷⣟⠻⠿⢋⣴⢃⣠⡄⠀⠀⠰⣧⣤⡿⣈⣿⣁⢻⣦⣸⠆⠀⠀⠀⣄⡘⢧⡙⠿⠟⣫⡾⠃⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠘⣿⠛⠛⢛⡟⡿⢧⣠⣾⠋⢀⣠⡽⠔⠙⣿⠋⠠⢯⣀⡀⠘⣷⢄⡼⢯⢳⡙⠟⠛⣿⡇⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⢻⡆⠀⡾⢸⠁⡼⢽⠋⣽⡿⠛⠓⣦⠀⠛⠀⣤⠚⠛⢯⣯⠙⡏⢧⠈⡇⢻⠀⢠⡟⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⢻⡀⣇⠘⣶⠃⢾⢸⢹⠁⡴⠛⠛⢷⢀⡴⠛⠛⢦⠈⣷⡇⣹⠘⣷⠇⢸⢀⡟⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⣸⡇⢙⣦⣼⡄⠘⢿⡘⣆⣧⡄⠀⣸⣿⣇⠀⢀⣼⣡⢏⡷⠃⢠⣧⢴⡋⠘⣇⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⣠⡿⠀⣼⣱⣿⣿⣦⣤⣷⣤⣭⣤⣾⣷⠿⣾⣷⣤⣬⣤⣾⣥⣤⣾⣿⡞⣧⠀⢻⣆⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠐⣿⣿⣁⡀⢻⡘⢿⣿⣿⣿⣿⠿⠻⡏⠁⠀⠈⢹⡟⠻⣿⢿⣿⣿⣿⡿⢃⡿⠀⣀⣿⣷⠂⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠘⣷⠈⠹⣾⠉⠓⠺⠟⠛⣫⢵⡿⢾⡇⠀⠀⠀⢘⡷⢶⡬⣝⡛⠻⠟⠚⠋⣷⠟⠁⣾⠇⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⣿⠀⣤⠏⠀⠀⠀⢀⡾⠁⠘⣧⡀⠁⠀⠀⠀⠈⢀⣸⠇⢈⢻⡄⠀⠀⠀⠹⣄⠀⣿⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠠⣟⠀⢼⡿⠦⣤⣄⣨⣿⡉⠛⠲⣽⣆⠀⠀⠀⣰⣿⠾⠛⠻⣿⣇⣠⣤⠴⢾⣧⠀⣻⡆⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠙⣆⠈⢳⣹⡗⣿⡿⣤⢷⣦⣤⣄⣿⣿⠿⣿⣟⣡⣤⡴⣶⣤⢿⣿⣻⣟⡿⠁⣰⠟⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠘⣆⠀⣿⣾⡟⢀⣿⡟⢰⡇⠀⡏⠙⣶⠋⢻⠁⢸⡇⢻⣿⡀⢻⣧⢿⠀⣰⠃⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣾⣷⠟⢀⣾⠃⣠⡟⣿⣿⡷⠶⣿⠶⢾⣿⣿⠻⣄⡙⣷⡀⠻⣏⢷⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⢀⠜⠛⠁⣠⣾⣿⣿⣿⣴⣿⣴⣿⣶⣿⣷⣾⣧⢼⣇⣿⣿⣿⣿⣄⠈⠓⠳⣄⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⢀⡠⠞⠁⢀⡤⡞⠁⣿⢹⣿⣫⡷⠛⠉⠉⠉⠉⠉⠉⠛⠾⣽⣿⣟⣿⠀⢳⢦⡀⠈⠳⢤⡀⠀⠀⠀⠀⠀");
                                                        puts("⢀⣀⣤⣴⣚⣁⠤⠴⠚⠁⠀⣇⠀⣿⡺⣿⣽⠀⣠⡶⡟⠛⠛⠛⢻⢶⣄⠀⣿⣿⢗⣿⠀⢸⠀⠈⠛⠢⠤⣌⣛⣢⣤⣀⡀");
                                                        puts("⠀⠉⠉⠁⠁⠀⠀⠀⠀⠀⠀⣿⣄⡈⠻⣾⡟⢰⣏⡞⠁⠀⠀⠀⠈⢳⡽⣆⢻⣷⠟⢁⣠⣿⠀⠀⠀⠀⠀⠀⠀⠉⠉⠉⠁");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡾⠁⠀⢻⠀⠈⣠⢟⡼⠀⠀⠀⠀⠀⠀⠀⢣⡹⣆⠁⠀⡿⠀⠈⢷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣷⠯⠤⢾⣀⣴⣯⣞⢁⠀⠀⠀⡀⠀⠀⠀⠈⣳⡝⢧⣄⣿⠤⠽⣾⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠘⠉⠀⠀⠀⠀⠁⠉⠲⢮⣭⣥⣾⣿⣿⣿⣷⣦⣭⡭⠖⠋⠀⠀⠀⠀⠀⠉⠃⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⠛⠛⠛⠛⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("");
                                                        puts("Failure! The Shady Discord group caught some Shade by Professor Garrett Next class meetting. (-100 points)");
                                                        puts("");
                                                    }
                                                } 

                                                else if (room7subChoice == 3) 
                                                {
                                                    if (rand() % 2) 
                                                    {
                                                        
                                                        room7points += 5;
                                                        puts("");
                                                        printf("∩――――――――――∩\n");
                                                        printf("|| ∧   ﾍ　   ||\n");
                                                        printf("||(* ´ ｰ`) ZZzz\n");
                                                        printf("|ﾉ^⌒⌒づ`￣  ＼\n");
                                                        printf("(　ノ　　⌒ ヽ ＼\n");
                                                        printf("＼　　||￣￣￣￣￣||\n");
                                                        printf("＼,ﾉ||\n");
                                                        puts("Success! I'm ridin' solo, I'm ridin' solo, solo. (+5 points)");
                                                        puts("");
                                                    } 

                                                    else 
                                                    {
                                                        room7points -= 10;
                                                        puts("");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠰⠀⠀⣠⣤⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣠⠞⢿⣧⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣶⣶⡀⠀⠀⢀⡴⢻⠁⠀⠘⣿⡄⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⣿⣿⣿⣷⣤⡴⠋⠀⢸⠀⠀⠀⢿⣇⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠺⣿⣿⣿⣿⣿⣿⣿⡆⠀⡇⠀⠀⠀⢸⣿⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢻⣿⣿⣿⣿⣿⣿⢐⠁⠀⠀⠀⠈⣿⡀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⢏⣿⣿⣿⣿⣿⣿⠆⠀⠀⠀⠀⠀⣿⡇");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⢠⣾⣷⣾⣿⣿⣿⣿⣿⣿⡆⠀⠀⠀⠀⠀⢿⡇");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⢀⡾⣿⣿⣿⣿⣿⣿⣿⣿⣿⠁⠀⠀⠀⠀⠀⢸⡇");
                                                        puts("⠀⠀⠀⠀⠀⠀⢠⡞⠁⢹⣿⣿⣿⣿⣿⣿⣿⣿⡆⠀⠀⠀⠀⠀⢸⠀");
                                                        puts("⠀⠀⠀⠀⠀⣠⠟⠀⠀⠈⣿⣿⣿⣿⣿⣿⣿⣿⣷⠀⠀⠀⠀⠀⢸⠀");
                                                        puts("⠀⠀⠀⠀⣰⠏⠀⠀⠀⠀⢻⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⡨⠀⠁⠀⠀");
                                                        puts("⠀⠀⠀⣴⠋⠀⠀⠀⠀⠀⠈⣿⣿⣿⣿⣿⣿⣿⣿⡆⠀⠷⡈⠀⠀⠀");
                                                        puts("⠀⠀⣼⠃⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⣿⣿⣿⣿⣿⡇⠀⠯⠄⠀⠀⠀");
                                                        puts("⢀⣼⠃⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⡇⠀⡿⠀⠀⠀⠀");
                                                        puts("⡾⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣷⡸⡹⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⠗⣛⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣝⠂⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⡅⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⡀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⣄⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠿⠛⠃");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠁⠨⠀⠀⠄⠆⡞⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠅⠀⠠⢡⠃⡇⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠨⠀⠀⡁⠩⢰⠁⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠅⠀⡠⠁⢈⡼⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠁⠀⠐⠁⠀⠀⠀⠀⠀⠀");
                                                        puts("");    
                                                        puts("Failure! The Lab doing a finisher on you instead. (-10 points)");
                                                        puts("");
                                                    }
                                                } 

                                                else 
                                                {
                                                    puts("Invalid choice.");
                                                }

                                                break;

                                            // Use AI Path / Choice 4 
                                            case 4: 
                                                puts("\nYou choose to use AI. How do you proceed?");
                                                puts("1. Ask for advice.");
                                                puts("2. Let AI solve the problem.");
                                                puts("3. Let AI check your work");
                                                printf("Enter your choice: ");
                                                scanf("%d", &room7subChoice);

                                                if (room7subChoice == 1) 
                                                {
                                                    if (rand() % 2) 
                                                    {
                                                        room7points += 5;
                                                        puts("");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣶⣤⠀⠈⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣦⣴⣶⣶⣿⣿⣿⣷⣶⣶⣦⣤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣿⣦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣠⣶⣿⠛⠁⠈⠙⠿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠿⠛⠀⠀⠙⢿⣷⣤⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⣀⣤⣶⣾⡿⠛⠛⠋⠀⠀⠀⠠⠀⠀⠀⠀⠀⠈⠉⠉⠉⠉⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠻⢿⣶⣄⡀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⢀⣴⣾⡿⠛⠉⠀⠀⠀⠀⠀⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀⠀⢀⠀⠀⠀⠀⠀⠉⠻⣿⣶⣄⠀⠀⠀");
                                                        puts("⠀⠀⣰⣿⠟⠉⠀⠀⠀⠀⠀⢀⣾⡿⠂⠀⠀⠀⢀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⡄⠀⠀⠀⠀⠀⠀⠛⣿⣦⠀⠀");
                                                        puts("⠀⣼⣿⠇⠀⠀⠀⠀⠀⠀⢀⣾⡿⠁⠀⠀⠀⠀⠻⠿⠀⠀⠀⠀⠀⢠⣤⣤⡀⠀⠀⠀⠀⢸⣿⠆⠀⠀⠈⢿⣧⠀⠀⠀⠀⠀⠀⠀⠈⢿⣧⠀");
                                                        puts("⢰⣿⠃⠀⠀⠀⠀⠀⠀⠀⣼⣿⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡀⠈⢻⡟⠁⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢿⣧⠀⠀⠀⠀⠀⠀⠀⠘⣿⡇");
                                                        puts("⢸⣿⡁⠀⠀⠀⠀⠀⠀⢠⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⣇⣴⡿⣷⣄⣽⡷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⢿⣷⣀⠀⠀⠀⠀⢀⣼⣿⠁");
                                                        puts("⠀⢻⣷⣄⡀⠀⠀⠀⣠⣾⡿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠀⠀⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⣿⡿⣷⣶⣾⡿⠟⠁⠀");
                                                        puts("⠀⠀⠉⠛⠿⠿⠿⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⣿⣄⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⢰⣿⡋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣿⣆⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⢠⣿⡏⠀⠀⣰⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⣆⠀⠀⠹⣿⡆⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⣾⣿⠀⠀⢀⣿⠟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⣆⠀⠀⢻⣷⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠻⣿⣤⣤⣿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⣿⣤⣤⣾⡟⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠈⢹⣿⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⣿⠛⠉⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⢸⣿⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠈⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⡟⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⢿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣿⠇⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠘⣿⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⣿⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⣿⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⡿⠃⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⡿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⡇⠀⠀⠀⠀⢀⣀⣀⣀⣀⣀⠀⣀⣀⣀⠀⠀⠀⣀⣀⣀⡀⠀⠀⠀⠀⠠⣿⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣿⡀⠀⠀⠀⣼⣿⠛⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⢿⣷⣄⠀⠀⢠⣿⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⣿⣶⣶⣾⢟⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠿⢿⡿⠿⡋⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("");
                                                        puts("Success! AI gave you info to refresh your brain on the lectures. (+5 points)");
                                                        puts("");
                                                    } 

                                                    else 
                                                    {
                                                        room7points -= 2;
                                                        puts("");
                                                        puts("⠀⠀⠀⠀⣠⣴⣶⣿⣿⣿⣿⣿⣷⣶⣤⣑⢦⠀⢀⡴⠚⠉⠓⢢⡴⠒⠉⠑⠢⡀");
                                                        puts("⠀⠀⣤⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⠑⣾⣄⣴⣿⠇⢀⣅⣠⣾⠖⠀⡰");
                                                        puts("⢀⣼⣿⣿⣿⣿⣿⣿⣿⡿⠿⠿⠟⠛⠛⠻⣷⢹⣀⡾⠁⣴⠟⠁⢸⠁⣠⠞⠁");
                                                        puts("⢸⣿⣿⣿⣿⣿⠟⠛⠉⠁⠀⠀⠀⠀⠀⠀⠀⠈⣧⢣⡏⠉⣿⠀⠀⢸⠉⣿⠀⠀");
                                                        puts("⢸⣿⣿⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⢿⠛⠁⠀⠀⠈⠛⠋⠀⠀");
                                                        puts("⢸⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣴⠶⡶⡶⡄⢸⡝⣦⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⡌⣿⣟⠀⠀⠀⣀⣤⣤⣤⣄⡄⠐⢾⣿⡚⢿⣛⠛⠃⠀⠻⡜⡄⠀⠀⠀⠀⠀⠀");
                                                        puts("⣹⣜⣿⠀⠀⠞⢋⣡⣿⣚⡷⠿⠀⠀⣝⡍⠉⠁⠀⠀⠀⢻⡏⣷⠀⠀⠀⠀⠀⠀");
                                                        puts("⣿⣭⠿⠄⠀⠐⠋⠥⠚⠋⠀⣠⡄⠀⠈⠛⢓⣤⡀⠀⠀⡈⣧⠃⠀⠀⠀⠀⠀⠀");
                                                        puts("⡇⢧⠰⠃⣴⠃⠀⠀⠀⢠⠞⠁⠤⠤⣤⣾⣋⡠⣷⠀⠀⡇⡿⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠙⢌⠳⣄⡼⠀⠀⠀⠀⠀⠀⣠⠴⠞⢉⣩⠵⠶⣿⠀⠀⢰⠃⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠑⢤⣀⣸⠀⠀⠀⠀⢿⡟⠛⠉⠉⣀⣠⠞⠉⠀⠠⣸⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠸⣖⠀⠀⠀⠀⠉⠉⠉⣉⣉⣠⡤⠀⠀⢰⡿⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠈⢣⡀⠀⠀⠀⠀⠀⠉⠉⠉⠀⠀⢠⠞⠁⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠈⠓⠲⠦⣤⣀⣀⣀⣀⣀⣴⠎⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("");
                                                        puts("Failure! What the heck was AI talking about?. (-2 points)");
                                                        puts("");
                                                    }
                                                } 


                                                else if (room7subChoice == 2) 
                                                {
                                                    if (rand() % 2) 
                                                    {
                                                        room7points += 1;
                                                        puts("");
                                                        puts(" _\\__/_ ");
                                                        puts(" [_•_•_] ");
                                                        puts(" /|     |\\ ");
                                                        puts("   |￣| ");
                                                        puts("Failure! oh wait...Success! man atleast put some work in!. (+1 points)");
                                                        puts("");
                                                    } 

                                                    else 
                                                    {
                                                        room7points -= 30;
                                                        puts("");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⣴⣶⠾⡿⠿⠿⠿⠷⣶⣦⣤⣀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⣠⣴⡿⣿⡛⠹⣇⣀⠀⡀⠀⠀⠀⠀⠀⠉⠛⢿⣦⣄⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⣠⣾⠟⣁⣤⣬⣽⣿⣿⣿⣿⣿⣿⣿⣷⣤⣄⠀⠀⠀⠈⠻⣷⣄⠀⠀⠀");
                                                        puts("⠀⠀⣴⣿⢁⣾⣿⣿⣿⣿⣿⣿⣿⣯⣭⣝⣿⣿⣟⠃⠀⠀⠀⠀⠈⢿⣦⠀⠀");
                                                        puts("⠀⣼⡟⢈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠛⠻⢿⣿⣷⣶⣤⣀⣄⠀⠀⢻⣧⠀");
                                                        puts("⢰⣿⠀⣿⣿⣿⣿⣿⣿⣧⢿⣿⣿⠿⠟⠛⠶⣄⡀⠙⠿⣾⣿⣿⣿⠁⠀⠀⣿⡆");
                                                        puts("⣾⡇⠀⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠈⠙⣶⣤⣀⣟⣯⡋⠀⠀⠀⢸⣷");
                                                        puts("⣿⡇⢀⣿⣿⣿⣿⣿⣿⣿⣦⡀⠀⠀⠀⠀⠀⠀⣀⡀⠉⠉⠉⠈⣧⠀⠀⠠⣸⣿");
                                                        puts("⢿⡇⠾⠟⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⣀⠹⣦⣀⡠⢻⡿");
                                                        puts("⠸⣿⠀⠀⠈⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⠙⠒⠒⣿⠇");
                                                        puts("⠀⢻⣧⠀⠀⢰⣿⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⣼⡟⠀");
                                                        puts("⠀⠀⠻⣷⡐⠴⠏⠀⠿⠛⠻⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣇⣾⠟⠀⠀");
                                                        puts("⠀⠀⠀⠙⢿⣦⣄⣀⠁⠀⠀⢀⣸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠋⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠙⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠋⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⠻⠿⢿⣿⣿⣿⣿⡿⠿⠟⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("");
                                                        puts("Failure! Professor Garrett lights up the whole class next meeting. (-30 points)");
                                                        puts("");
                                                    }
                                                } 

                                                else if (room7subChoice == 3) 
                                                {
                                                    if (rand() % 2) 
                                                    {
                                                        room7points += 5;
                                                        puts("");
                                                        puts("⠀⠀⠀⠀⣠⣤⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣤⣄⠀⠀⠀⠀");
                                                        puts("⠀⢀⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⠀⠀");
                                                        puts("⠀⣾⣿⣿⣿⣿⠿⠿⢿⣿⣿⣿⣿⣿⠿⠿⣿⣿⡿⠿⠿⠿⠿⢿⣿⣿⣷⠀");
                                                        puts("⢸⣿⣿⣿⣿⡇⢰⣶⣦⠘⣿⡿⢋⣴⣶⣶⣄⢹⣷⣶⡆⢰⣶⣾⣿⣿⣿⡆");
                                                        puts("⢸⣿⣿⣿⣿⡇⢘⣛⡉⠸⣿⡇⢸⣿⣿⣿⣿⠀⣿⣿⡇⢸⣿⣿⣿⣿⣿⠆");
                                                        puts("⢸⣿⣿⣿⣿⡇⢸⣿⣿⠇⣸⣧⠘⢿⣿⣿⠟⢰⣿⣿⡇⢸⣿⣿⣿⣿⣿⠇");
                                                        puts("⠐⣿⣿⣿⣿⣧⣤⣤⣤⣾⣿⣿⣷⣦⣤⣤⣶⣿⣿⣿⣧⣼⣿⣿⣿⣿⡿⠀");
                                                        puts("⠀⠈⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠁⠀");
                                                        puts("⠀⠀⠀⠈⠙⠛⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠛⠋⠁⠀⠀⠀");
                                                        puts("");    
                                                        puts("Success! The Ai made some sense and it helped. (+5 points)");
                                                        puts("");
                                                    } 

                                                    else 
                                                    {
                                                        room7points -= 15;
                                                        puts("");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⢻⠃⠀⠀⠀⠀⠀⢸⠇⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⡆⠀⠀⠀⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⣀⣀⣀⣇⣀⣀⣀⣀⣀⣊⣀⣀⣀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⣿⣀⣹⣗⣶⣀⡄⠀⠀⠀⠀⠀⢻⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⣿⢽⡿⠋⠺⣹⡾⢷⡞⠛⢢⠀⢺⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⣷⡺⣧⡄⣤⣯⢷⠺⠦⣀⠼⠁⢸⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⣿⠉⡘⠧⠼⠉⠁⠀⠀⠀⠀⠀⢸⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠉⠉⠉⠉⠉⠉⢹⠉⠉⠉⠉⠉⠉⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⡤⠴⠒⠒⠒⠄⠞⠒⠒⠒⠊⠡⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠃⠀⠀⠀⠀⠀");
                                                        puts("⡶⠶⠲⠲⠒⡇⢰⡏⠉⠉⠉⠉⠉⠉⢹⢀⡆⣸⠓⠋⠉⢻⠀⠀");
                                                        puts("⡇⠀⠀⠀⠀⡇⢸⡇⠀⠀⠀⠀⠀⠀⠀⠀⠇⢹⠀⠀⠀⠀⠀⢸  ");
                                                        puts("⡇⠀⠀⠀⠀⡇⢸⡇⠀⠀⠀⠀⠀⠀⠀⠀⡄⢸⠀⠀⠀⠀⠀⢰  ");
                                                        puts("⠇⠀⠀⠀⠀⡇⠈⠓⠒⠒⠒⠒⠒⠒⠒⠂⢸⠀⠀⠀⠀⠀⠸⠀");
                                                        puts("⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⠀⠀⠀⠀  ");
                                                        puts("⠀⠀⠀⠀⠀⠉⠉⠉⡞⠉⠉⠉⠉⢹⢹⠉⠉⠁⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⢤⡇⠀⠀⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("");
                                                        puts("Failure! The Ai just confused you even more (-15 points)");
                                                        puts("");
                                                    }
                                                } 

                                                else 
                                                {
                                                    puts("Invalid choice.");
                                                }

                                                break;

                                            // Sheer Will and past Experience / Choice 5
                                            case 5: 
                                                puts("\nYou rely on Sheer willpower and past EXP. What do you do?");
                                                puts("1. Trust your EXP.");
                                                puts("2. Trust your what you have and newly learned.");
                                                printf("Enter your choice: ");
                                                scanf("%d", &room7subChoice);

                                                if (room7subChoice == 1) 
                                                {
                                                    if (rand() % 2) 
                                                    {
                                                        room7points += 7;
                                                        puts("");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⢀⣀⣀⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⢀⣤⣶⣿⣿⣆⠘⠿⠟⢻⣿⣿⡇⢐⣷⣦⣄⡀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⢸⣿⣿⣿⣧⡄⠙⣿⣷⣶⣶⡿⠿⠿⢃⣼⡟⠻⣿⣿⣶⡄⠀⠀⠀");
                                                        puts("⠀⠀⢰⣷⣌⠙⠉⣿⣿⡟⢀⣿⣿⡟⢁⣤⣤⣶⣾⣿⡇⠸⢿⣿⠿⢃⣴⡄⠀");
                                                        puts("⠀⠀⢸⣿⣿⣿⣿⠿⠋⣠⣾⣿⣿⠀⣾⣿⣿⣛⠛⢿⣿⣶⣤⣤⣴⣿⣿⣿⡆");
                                                        puts("⠀⣴⣤⣄⣀⣠⣤⣴⣾⣿⣿⣿⣿⣆⠘⠿⣿⣿⣷⡄⢹⣿⣿⠿⠟⢿⣿⣿⣿");
                                                        puts("⠀⢸⣿⣿⡿⠛⠛⣻⣿⣿⣿⣿⣿⣿⣷⣦⣼⣿⣿⠃⣸⣿⠃⢰⣶⣾⣿⣿⡟⠀");
                                                        puts("⠀⠀⢿⡏⢠⣾⣿⣿⡿⠋⣠⣄⡉⢻⣿⣿⡿⠟⠁⠀⠛⠛⠀⠘⠿⠿⠿⠋⠀⠀");
                                                        puts("⠀⠀⠀⠁⠘⢿⣿⣿⣷⣤⣿⣿⠗⠀⣉⣥⣴⣶⡶⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⣤⣀⡉⠛⠛⠋⣉⣠⣴⠿⢿⣿⠿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠈⠻⢿⣿⣿⣿⣿⡿⠋⣠⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⣤⡾⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⡿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("");   
                                                        puts("Success! You actually remembered what prep transfer courses taught to help now. (+7 points)");
                                                        puts("");
                                                    } 

                                                    else
                                                    {
                                                        room7points -= 8;
                                                        puts("");
                                                        puts("(\\__/)");
                                                        puts("(•ㅅ•)");
                                                        puts("");
                                                        puts("Failure! Going through the motions, caught you lacking. (-8 points)");
                                                        puts("");
                                                    }
                                                } 

                                                else if (room7subChoice == 2)
                                                {
                                                    if (rand() % 2)
                                                    {
                                                        room7points += 5;
                                                        puts("");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠳⣶⡄");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⡴⠖⢂⣽⣿⣿⣷⣔⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⣿⠟");
                                                        puts("⠀⠀⠀⠀⣀⣤⡶⢿⣋⣥⣤⣶⣿⣿⣿⣿⣿⣿⣿⣶⣤⣄⣀⡀⢀⣠⣾⠿⠋⠀");
                                                        puts("⠀⢀⣴⣿⠟⠉⠀⠀⠀⠈⠉⠛⠻⣿⣿⣿⣿⡿⠛⠋⠉⣀⣤⠶⠟⠋⠁⠀⠀⠀");
                                                        puts("⢰⣿⡟⠁⠀⠀⠀⣷⠀⠀⠀⠀⠀⠈⣿⣿⣟⣀⡤⠖⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠘⠿⣧⣀⡠⠤⢾⣿⣷⠤⠄⠀⠀⠀⢹⣿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠉⠀⠀⠀⡿⠁⠀⠀⠀⠀⠀⠈⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("⠀⠀⠀⠀⠀⠀⠀⠙⠀⠀⠀⠀⠀⠀⠀⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                        puts("");
                                                        puts("Success! Your community college professor probably had a 5 star ratemyprofessor rating!. (+5 points)");
                                                        puts("");
                                                    } 

                                                    else 
                                                    {
                                                        room7points -= 5;
                                                        puts("");
                                                        puts("☆");
                                                        puts("Failure! did your community college professor had below a 3 star ratemyprofessor rating?. (-5 points)");
                                                        puts("");
                                                    }
                                                }

                                                else
                                                {
                                                    puts("Invalid choice.");
                                                }

                                                break;
                                            
                                            // Leave the room/ Quit to evaluate part
                                            case 99: 
                                                puts("");
                                                puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡒⠦⠤⠤⠄⠀⢀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀     ⢸⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⢼⠀⠀⠒⠒⠤⠤⠤⠤⠤⣀⣀⣀⣀⠀⠀⠘⡇⠀⠀⡀⠀⠀⠀⠀⠀⠀");
                                                puts("⠀⠀⠀⠀⢀⣀⠤⠔⠒⠉⠁⢀⣼⡀⠀⢠⣀⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠰⡧⠚⠉⢹⡀⠀⠀⠀⠀⠀⠀");
                                                puts("⠰⣖⠊⠉⠀⠀⠀⣠⠔⠚⠉⠁⢀⡇⠀⡀⠀⠀⠀⠀⠉⠁⠀⠀⠀⠀⠀⠀⢀⡇⠀⣤⠀⢷⡀⠀⠀⠀⠀⠀");
                                                puts("⠀⠈⠳⡄⠀⠀⠋⣠⠖⠂⡠⠖⢙⡇⠀⠈⠉⠉⠉⠉⠓⠒⠒⠒⠒⠒⠆⠀⠀⣷⡀⠉⢦⠀⢳⡀⠀⠀⠀⠀");
                                                puts("⠀⠀⠀⠈⢦⠀⠀⠁⠀⠀⠀⢀⠼⡇⠀⠀⠦⠤⠤⠄⡀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠱⡀⠀⠳⡀⠙⣆⠀⠀⠀");
                                                puts("⠀⠀⠀⠀⠀⠳⡄⠀⢀⡤⠊⠁⢠⡇⠀⠠⠤⢤⣀⣀⣀⣀⣀⡀⠀⠀⠀⠀⠀⡧⡀⠙⢄⠀⠱⠄⠈⠳⡄⠀");
                                                puts("⠀⠀⠀⠀⠀⠀⠙⡄⠀⠀⡠⠔⢻⠀⠀⠀⠀⠀⠀⠠⣄⣀⣀⣁⣀⠀⠀⠀⠀⡇⠱⡀⠀⠀⠀⠀⠀⣀⣘⣦");
                                                puts("⠀⠀⠀⠀⠀⠀⠀⠘⣆⠀⠀⠀⡸⠀⠀⠰⣄⣀⡀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀⡇⠀⠃⢀⣠⠴⠛⠉⠀⠀⠀");
                                                puts("⠀⠀⠀⠀⠀⠀⠀⠀⠘⡄⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠉⠉⠉⠙⠒⠀⠀⠀⠠⡇⣠⠔⠋⠀⠀⠀⠀⠀⠀⠀");
                                                puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⡄⢸⠁⠀⠀⠀⠒⠲⠤⣀⡀⠀⠀⠀⠀⠀⠀⠀⢰⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠇⠀⠀⠀⠀⠀⠀⠀⠀⠉⠑⠢⣄⠀⠀⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣎⣀⠀⠀⠀⠀⠀⠀⠀⠢⠤⣀⠀⠀⠁⠀⠀⠀⠸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢡⠉⠙⠒⠤⢤⡀⠀⠀⠀⠀⠉⠒⠀⠀⠀⠀⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⠶⠒⠊⠉⠉⠉⠓⠦⣀⠀⠀⠀⠀⠀⠀⢰⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠲⢄⡀⠀⠀⡎⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠲⣼⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
                                                puts("");
                                                puts("\nYou decided to face the boss. Time to face The Phantom of Professor Garett.");
                                                puts("");
                                                break;

                                            default:
                                                puts("Invalid choice.");
                                                break;
                                        }

                                        // Display points after each choice
                                        puts("");
                                        printf("Current points: %d/100\n", room7points);
                                        puts("");
                                    }

                                // The function requirement test
                                // get them out of the loop too after 99
                                    room7evaluate_grade(room7points);
                                }

                                break;
		

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


// Room 7 Function
// You must use at least one separate function that will be located after the main function, make sure to include a function prototype at the beginning of the program.

void room7evaluate_grade(int room7points)
{
    puts("");
    puts("\n The Professor Garrett Phantom judges your performance...");
    puts("⢮⡢⡣⡢⡂⢆⠢⡂⡆⡢⢢⠢⡢⡢⡢⡒⣒⢲⢸⢰⢸⢲⢱⢪⡪⡮⡮⡮⡪⡪⡪⡪⡪⡪⡪⡪⡢⡣⡢⡣⡢⡣⡢⡣⡢⡣⡪⡪⡚⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⢞⢞⢮⢮⢮⢮⢮");
    puts("⡳⡕⡕⢜⢌⢢⢑⠕⡜⢌⢎⢪⠢⡣⡪⡪⡪⡪⡪⡪⡪⡪⡪⡮⡮⡯⡺⡪⡪⡪⡪⡪⡪⡪⡪⡪⡪⡪⡪⡪⡪⡪⡪⡪⡪⡪⡪⡪⡪⡢⡣⡳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⡳⣕⣗⣗⣗⣗⣗⣗⣗⣗⢽⢝⢽⢽⢽⢕⣗");
    puts("⡯⡪⡪⡊⡆⢕⢅⢇⢕⢱⢸⢰⢱⢱⢱⢱⢱⢱⢱⢱⢱⡱⡽⡽⡽⣝⢝⢎⢎⢎⢎⢎⢎⢎⢎⢎⢎⢎⢎⢎⢎⢎⢎⢎⢎⢎⢎⢎⢎⢎⢎⢎⢎⢞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⢮⣫⣫⣫⡳⡽⣕⢗");
    puts("⢯⡪⡪⡪⡊⡎⡢⢣⢊⢎⢎⢎⢎⢎⢎⢎⢎⢎⢎⢮⡪⡮⡯⡯⡯⡪⡪⡪⡪⡪⡪⡪⡪⡪⡪⡪⡪⡪⡪⡪⡪⡪⡪⡪⡪⡪⡪⡢⡣⡣⡣⡣⡣⡳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⡳⡵⡵⡵⡵⣝⢞⢮⡳");
    puts("⡳⡕⡕⡕⡕⢕⢜⢜⢜⢜⢜⢜⢜⢜⢜⢜⢜⢜⢕⢕⢽⢽⢽⢽⢝⢎⢎⢎⢎⢎⢎⢎⢎⢎⢎⢎⢎⢎⢎⢎⢎⢎⢎⢎⢎⢎⢎⢎⢆⢇⢎⢪⢪⢪⢺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⡺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⡪⡯⣺⡺⣺⡪⡯⡳⣝");
    puts("⢝⢎⢎⢎⢎⢎⢎⢎⢎⢎⢎⢎⢎⢎⢮⡪⡳⣕⢝⢕⢗⢝⢽⢽⢕⢕⢕⢕⠕⡕⡱⡑⡕⢅⢇⠕⢜⢐⢑⠌⠢⠑⢌⠢⡑⢌⠪⡘⢜⢔⠕⡕⢕⢕⢕⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣝⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⢮⢯⣺⡺⣺⣪⡫⡯⣺");
    puts("⢝⢕⢕⢕⢕⢕⢕⢕⢕⢕⢕⢕⢕⢕⢕⢝⢮⡪⣫⡫⡳⡽⡝⡝⢕⠕⠅⠅⠕⡑⢌⠢⡑⢕⠔⢅⠕⡐⡐⠨⠠⡁⡂⡢⢊⠔⡡⢊⠢⡃⡇⡇⡇⡇⡇⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⢽⢕⣗⣝⢮⣺⡪⡯⣺");
    puts("⡽⡕⡕⡕⡕⡕⡕⡕⡕⣕⢕⢕⣕⢕⢗⢗⣕⢝⢮⢪⢪⢫⠪⡨⠂⢌⠈⠌⡐⠄⡑⠌⡜⢔⢱⠡⡊⡐⠨⢈⠢⢈⠂⠊⠢⠑⢌⠢⡑⢌⠪⡪⢪⠪⡪⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⡺⡺⣺⣪⣫⡳⡳⡳⡳⡵⣝⣝⣞");
    puts("⣝⢮⡪⡪⡪⡪⡪⡪⡪⡪⡳⡵⣕⣝⣝⢵⢕⢗⣗⢕⢕⢅⠕⠨⠨⠐⠈⡀⢂⠐⡀⠑⡜⡜⡜⡌⡂⡂⠅⠄⢂⢂⠄⢈⠠⡑⡠⡊⢔⠡⡱⡑⡕⢕⠕⡜⢜⢜⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⢮⢯⢮⢮⣺⣪⣫⣫⡫⡯⡮⡮⡮");
    puts("⣗⣕⢝⢮⡪⡪⡪⡪⡺⡺⡺⡪⡮⡮⡮⣫⣫⡳⣳⡱⡱⡐⡡⢁⠅⡂⠁⡀⡐⡠⠠⡁⡎⣎⢎⢎⠢⡊⢜⢌⠢⢢⢑⢑⢌⢢⠱⡸⡰⡑⡕⢜⢜⢜⢌⠪⡂⢢⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⡳⡽⡽⡽⣕⣗⢵⢵⢵⢝⣝⢞⢞⢮");
    puts("⡮⡮⡳⣕⢝⢮⢺⣪⣫⡫⡯⡺⣺⡪⡯⣺⣺⡺⡺⡜⡜⡔⡜⡆⡇⡆⠕⡌⡢⢪⢸⢸⢸⡪⡣⡣⡱⡘⢔⠅⡇⡕⡌⡆⡕⡜⢜⢌⢆⢇⢇⢇⢕⢕⠅⢕⠱⡐⣕⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⢗⣗⣗⣗⣗⢗⣗⣗⣗⣗⢽⢝⢽⢝⢮⢮⣫⡳⡽⣕⣗⣝⢽⢕");
    puts("⢯⢯⢮⡪⡳⣝⢵⢵⢕⣝⣝⣝⢞⢮⢯⣺⣺⣪⣫⡫⣪⣪⡪⡪⡪⡪⡪⡪⡪⡪⡪⡪⡪⡮⡪⡪⡢⢣⢑⠅⡇⡕⡕⡕⡕⡕⡕⢅⢇⠪⡊⡎⡆⡇⢕⠐⡕⢌⢞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⢮⣳⣳⣳⣳⣳⣳⣳⣳⣳⡳⡽⡽⡽⡽⣕⣗⣗⢽⢝⣞⣞⢮⢯⡳");
    puts("⡽⡽⡵⣝⣝⢮⡳⡽⡵⡵⣕⣗⢽⢽⢕⣗⢷⢕⣗⡝⡞⡮⡺⡪⡪⡪⡪⡪⡪⢪⢊⢎⢟⢎⢎⠪⡘⢌⢆⠕⢌⢪⠸⡸⡸⡘⡌⢆⢕⠱⡨⡊⡎⡪⡂⢕⠜⡌⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⢽⢝⢮⢯⢯⣺⣺⡪⡯⣳⣳⣳⣳⡳⣝");
    puts("⡽⡽⣝⢮⢮⡳⣝⣞⢮⢯⣺⡪⡯⡯⣳⡳⡽⣕⣗⣝⢜⢎⢎⢎⢎⢎⢎⠪⡘⡐⡜⡕⡱⢑⢐⢑⠌⠢⡑⢅⠕⡐⢅⠣⢪⢘⢌⠢⡑⢕⢌⢢⠣⡪⡸⡘⡌⡮⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⡪⡯⡯⡯⡯⣳⣳⡳⡽⣝⣞⣞⢞⣞⣞⣞");
    puts("⡯⡯⡮⡯⡳⣝⣞⢮⢯⣳⡳⡽⡽⣝⣞⢮⢯⢮⡺⡮⡪⡪⡪⡊⢆⠕⡐⠅⡂⡢⡑⠄⡀⡑⡐⡐⡐⠠⠠⠑⡌⡢⡂⢕⠡⠢⡡⢃⠪⢢⢑⠜⢌⠢⡣⢪⣪⣻⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⡺⡺⣺⣺⣺⣺⡪⡯⡫⡯⡯⣺⣺⡪⡯⣺⣺⣪⡳⡳⡵⣕");
    puts("⢽⢽⢽⢽⢝⣞⢮⢯⣳⡳⡽⡽⣝⣞⢮⢯⢯⡳⡽⡽⡜⡜⢔⠅⢕⠨⢐⢁⠆⡇⡎⡪⡐⢄⠐⡀⡂⠡⠡⡑⢌⢆⠪⡐⠅⢕⠨⡂⢕⢑⠔⡡⠡⡃⢧⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⡳⣕⣗⣗⣗⣗⢽⢝⣞⣞⣞⣞⢮⢯⢯⢯⢯⣺⣺⡪⡯⣺⡺⣺⣪⡻⣺⣺");
    puts("⢽⢽⢽⣝⣗⣗⢽⣕⣗⢽⢽⢝⣞⢮⢯⢯⡳⣝⢽⢝⢎⢎⢆⢕⠡⡊⡰⡐⡕⡕⠕⢌⠪⢐⠠⠐⠠⠡⡁⠪⡐⠄⠕⡨⢈⠢⡑⢌⠢⡑⠌⢔⢑⠜⡜⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⢮⢯⣳⣳⣳⣳⡳⡽⡽⡽⡽⣕⣗⣗⢽⢝⣞⣞⣞⢮⢯⣺⣺");
    puts("⡯⣯⣳⣳⣳⣳⣳⡳⡽⡽⣝⣗⢷⢽⢽⢵⢝⢮⢯⢯⢇⢇⠕⢔⢑⢌⠢⡊⡢⡃⠕⡁⡊⠄⠢⡨⢈⠢⠨⢐⠈⠌⢂⠂⡂⠢⡈⡢⠡⡈⡪⢐⠅⡇⡇⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⢽⢕⣗⣗⣗⣗⢽⢽⢽⢽⢝⣞⣞⢮⢯⣳⣳⣳⡳⡽⣕⣗⣕");
    puts("⣝⣞⣞⣞⣞⣞⢮⢯⢯⣻⣺⡪⡯⡯⡯⡯⡯⡳⡽⡽⡵⡱⡨⢂⠕⡐⠅⠊⠄⠂⠅⢂⠠⠁⠡⠐⠀⠂⡁⠠⢈⢐⢀⠂⠠⢁⢐⢐⠡⢐⠨⢂⢕⢱⢱⢕⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⢷⢝⣗⣗⣗⣗⣗⢽⢽⢽⢽⢕⣗⣗⢽⢕⣗⣗⣗⢽⢝⢞⢞⢞");
    puts("⣺⣺⣺⣺⡺⡮⡯⣯⣳⣳⡳⡽⡽⡽⡽⡽⡽⣝⢽⢽⢝⡎⡜⠄⢕⢐⠡⠁⠌⡌⡪⡢⢣⠣⡱⠨⠪⡨⢘⠌⡂⡢⢂⠌⠄⠐⡐⡐⠨⠠⡑⡑⢌⢪⣪⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⡳⡽⣕⣗⣗⣗⣗⣗⢽⢽⢽⢽⢕⣗⣗⢽⢕⣗⣗⣗⢽⢽⢽⢝⢽");
    puts("⣺⣺⡺⡮⡯⡯⡯⣺⣺⡺⡮⡯⡯⡯⡯⡯⡯⡮⡯⡯⡳⣽⡸⡨⢂⠢⠡⠨⡘⡌⡪⡘⢔⠡⠨⠨⠨⢐⠡⢊⠐⢌⢐⠌⠌⠄⢂⠠⠁⢅⠢⢊⠢⡳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⡳⡽⣝⣞⣞⣞⣞⣞⢮⢯⢯⢯⢯⣳⣳⡳⡽⣕⣗⣗⣗⣝⣗⢽⢽⢽");
    puts("⡺⡮⡯⡯⡯⡯⡯⣺⡺⡮⡯⡯⡯⡯⡯⡯⣻⡪⡯⡯⡯⡺⡮⡪⡐⡡⠡⡑⡌⢎⠔⡨⢐⠨⡨⠨⠈⠄⠌⠄⡑⠄⢕⠨⠨⡐⠠⠀⠅⡂⢕⠡⡑⢝⢚⢞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⣞⢮⣻⣺⣺⣺⣺⡺⡮⡯⡯⡯⡯⣳⣳⡳⡽⣝⣞⣞⣞⣞⣞⢮⢯⡳⡽");
    puts("⡽⡽⡽⡽⡽⡽⣝⢮⢯⢯⢯⢯⢯⢯⢯⢯⣺⡪⡯⡯⡯⡯⡯⡳⡕⡔⡁⢇⢪⢢⢱⢸⢰⢱⢐⠅⢅⢅⠪⡐⢌⠪⡐⢌⢊⢐⠡⠁⡂⡪⢐⢑⠌⡆⢄⢇⠇⢓⢗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⢷⢝⣗⣗⣗⣗⣗⣗⢽⢽⢽⢽⢽⢝⣞⣞⢮⢯⣺⣺⣺⣺⣺⡪⡯⡳⡽⣝");
    puts("⡽⡽⡽⡽⡽⣝⢮⢯⢯⢯⢯⢯⢯⢯⢯⣳⣳⡳⡽⡽⡽⡽⡽⡽⣝⢮⡢⡃⡇⡇⡇⡇⡇⡇⡕⢅⢇⠢⡑⢌⢆⠣⡣⢂⠪⡂⡂⠡⠐⠄⢕⢐⢑⢌⢎⢎⠇⢔⢐⢕⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣗⣝⣗⣗⣗⣗⣗⣗⣗⢽⢽⢽⢽⢽⢕⣗⣗⢽⢕⣗⣗⣗⣗⣗⢽⢝⣝⣝⣞");
    puts("⡯⡯⡯⡯⡯⡮⡯⡯⡯⡯⡯⡯⡯⣯⣳⣳⣳⡳⡽⡽⡽⡽⡽⣝⢮⡳⡝⡎⡎⡎⡎⡎⡎⡎⡪⠢⡡⡑⢌⠢⠡⡃⡪⠂⠕⡐⠄⠅⠅⠅⠕⡐⡔⡕⡕⠅⠕⡐⡐⡐⡱⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⡳⡽⡽⡽⡽⡽⣕⣗⣗⢽⢕⣗⣗⣗⣗⣗⢽⢕⣗⢗⢗");
    puts("⡯⡯⡯⡯⡯⡯⡯⡯⡯⡯⡯⣯⣻⣺⣺⣺⣺⡪⡯⡯⡯⡯⡯⡮⡳⡹⠨⡂⢕⢕⢕⢕⠕⡕⠜⢌⠔⡈⡢⠡⠑⠌⢂⠡⠁⠔⠨⠨⠨⢨⠸⡨⢪⠪⠨⡈⡂⡂⠢⡈⡢⢂⠳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⣳⡳⡽⡽⡽⡽⡽⣝⣞⣞⢮⢯⡳⡳⣳⣳⣳⡳⡽⣕⣗⢽⢕");
    puts("⢯⢯⢯⢯⢯⢯⢯⢯⢯⢯⣻⣺⣺⣺⣺⣺⣺⡪⡯⡯⡯⡯⡯⡫⡘⢌⠪⡐⢱⢱⢱⢱⢑⢅⠣⠡⡂⠢⠨⠨⠨⢈⠄⠂⠅⠅⠅⢅⠕⡅⡣⡑⠅⠌⡂⡂⠢⡈⡂⠢⡈⡢⢑⢘⢺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⣺⡪⡯⡯⡯⡯⡯⣺⣺⡪⡯⡳⡽⣝⣞⣞⣞⣞⣞⣞⢮⢯⣳");
    puts("⡯⡯⡯⡯⡯⡯⡯⡯⣯⣳⣳⣳⣳⣳⣳⣳⡳⡝⡝⡝⣝⡝⡜⡐⢌⠢⡑⡨⠂⡇⡇⡣⡣⢪⠨⡊⠔⡡⠡⠡⡑⡐⠨⡈⢌⠢⡑⡅⡇⢕⠨⠠⠡⢁⢂⠂⠅⡂⡂⠅⢢⠨⡂⢕⢐⢜⠸⡺⣺⡺⣺⣺⣺⣺⣺⣺⣺⡺⡮⡯⡯⡯⡯⡯⣺⣺⡪⡯⡯⡯⣺⣺⣺⣺⡪⡮⡮⡯⡳⣕");
    puts("⢽⢽⢽⢽⢽⢽⢽⢝⣞⣞⣞⢞⢞⢎⢎⢆⢇⢇⢇⢧⡳⡱⡨⠨⠢⡑⢌⠄⠅⡪⡪⡪⡪⡢⡑⢌⠌⡢⠡⡑⢔⢨⠢⡊⡢⡑⡌⢎⠌⠂⢌⢐⢁⢂⠂⠅⠅⡂⡂⢅⢑⠌⡢⢑⢐⢌⢊⢆⠪⡪⢺⢺⣺⣺⣺⣺⡺⡮⡯⡯⡯⡯⡯⣯⣺⣺⡪⡯⡯⡯⣺⣺⣺⣺⡪⡯⡯⡯⡯⣺");
    puts("⢽⢽⢽⢽⢽⢽⢽⢕⢗⠕⡕⡕⡕⡕⡕⡕⡕⣕⣝⢗⢕⢕⠜⢌⠪⡨⠢⠨⠐⠨⡪⡪⡪⡢⠪⡐⢅⠪⡨⡢⢣⢑⠕⢌⠢⡪⠨⠂⠌⢌⢐⢀⠂⠔⡈⠌⡐⡐⡐⡐⢔⠡⡊⠔⡁⡢⢑⠔⡑⢌⠢⡑⢜⢜⢺⡪⡯⡯⡯⡯⡯⡯⡯⣺⣺⣺⡪⡯⡯⡯⣺⣺⣺⣺⣪⣫⣫⡫⡯⡺");
    puts("⠈⡯⡯⡯⡯⡯⡫⡣⡱⡱⡱⡱⡱⡱⡱⡱⡱⡐⠈⡎⡎⡢⢣⢑⠕⡨⠨⡨⠂⢁⢇⢇⠣⡪⢨⢢⡱⡱⡱⡑⡅⡣⡑⡅⠇⡊⠄⠅⠅⡂⠔⢐⠨⠐⠠⡁⡂⡂⠢⡈⡢⢑⠌⡂⡊⠔⡡⢊⠌⡢⡑⢌⢢⠱⡐⡍⢝⠽⡽⡽⡽⡽⣝⣞⣞⣞⢮⢯⢯⢯⡺⡺⡺⡺⣺⣪⣺⣪⣫⡫");
    puts("⠀⡯⡯⡯⡮⡫⡊⡆⡇⡇⡇⡇⡇⡇⡇⢎⢎⢆⠅⡇⡇⡇⡇⡇⡕⡨⢨⠢⠐⡐⢜⢔⢱⢨⣺⡪⡪⡪⡪⡪⡪⡢⠣⢊⠐⠄⠅⠌⡐⠠⢑⢐⠨⢈⢐⢐⢐⠠⡁⡂⡪⢐⠅⠢⠨⡈⡢⢑⢌⠢⢪⠸⡐⢅⢇⠪⡂⡇⢍⢫⠫⡯⣺⣪⣺⣪⣫⣫⡫⡳⣝⣝⣝⢝⢮⢮⢮⢮⢮⢮");
    puts("⠀⣝⢞⢮⢫⢂⢎⢎⢎⢎⢎⢢⠣⡣⡪⡪⡪⡪⡪⢌⠪⡪⡪⡪⡂⡎⢜⢌⢐⢌⢎⠪⠠⠡⠐⠱⡱⡱⡱⡱⡑⠌⠌⡐⠨⠠⢁⠂⠌⠌⡐⡐⠨⢐⠐⡐⡐⡐⡐⠌⠔⠁⡈⠌⡂⡂⡪⢐⠔⢅⠕⡑⢌⠢⡑⢅⠣⡪⢸⢐⢅⢇⠕⡕⢵⢵⢵⢕⢝⢮⢮⡪⡪⡳⡳⡳⡵⡵⣕⢕");
    puts("⠀⡪⡳⡱⡑⡜⡜⡜⢜⠔⡅⡇⢕⢕⢜⢜⢜⢜⢜⠀⠁⡊⡎⡢⢪⢪⢪⠢⡊⡎⡐⠅⡅⢅⠅⠅⠄⠃⡇⡪⠨⡈⡂⢂⠡⢈⢐⠨⢈⢂⠢⠨⠨⢐⠨⠐⠐⠀⠠⡐⢄⢑⠄⠕⡐⡐⢌⠢⡑⢅⠪⡨⠢⡑⢌⠢⡑⢌⠢⡑⡌⡢⢣⠱⡡⡃⡓⡝⣕⢕⢕⢝⢮⢮⡪⡪⡪⡪⡪⡳");
    puts("⠀⣝⢕⢱⢸⢨⢪⠪⡪⢸⠨⡊⡎⡎⡎⡎⡎⡎⢂⠀⡀⢎⠔⡨⡪⡪⡪⡱⡑⡕⢌⠎⡜⡐⢅⠅⡂⡁⡪⠠⡁⡂⡐⠄⠌⠄⡂⠌⡐⡐⠨⠨⠨⢐⠨⢐⠠⠡⢑⢐⠅⡢⠡⡑⠔⢌⠢⡑⢌⠢⡑⢌⠪⡨⠢⡑⢌⠢⡑⢌⠪⡘⢔⠱⡨⡊⡢⡃⢎⠝⡕⣕⢕⢕⢝⢮⡪⡪⡪⡪");
    puts("⠀⢘⠔⡅⢇⠕⡅⢇⢪⢊⢎⢜⢜⢜⢜⢜⢌⠊⠀⠠⡸⣐⢱⢸⢸⢸⢸⢰⢱⢱⢡⢃⢎⢜⢔⠡⡐⠌⠄⠅⡂⡐⡀⡊⠄⠅⡂⠅⡂⠌⠌⠌⢌⢐⠨⢐⠌⢌⢂⠢⡑⢌⠪⡐⢅⢕⢑⢌⠢⡑⢌⠢⡑⢌⠪⡨⠢⡑⢌⠢⡑⢌⠢⡑⢌⠢⡑⢌⠢⡑⢌⠪⡱⡱⣕⢕⢝⢜⢮⢪");
    puts("⠀⡢⡑⢌⠢⡣⡑⢅⠇⡕⢜⠔⡅⡇⡕⢕⠐⠀⢂⢕⢕⢕⢕⢕⢕⢕⢕⢕⢕⢕⢕⢕⢕⢑⠔⡡⢊⠨⠐⡁⠄⢂⠐⠄⠅⢅⠂⢅⢂⢑⠨⡈⡂⡢⠡⡑⢌⠢⠑⡐⢌⠢⡑⢌⠢⡊⡢⠢⡑⢌⠢⡑⢌⠢⡑⢌⠪⡨⠢⡑⢌⠢⡑⢌⠢⡑⢌⠢⡑⢌⠢⢑⠌⡂⡣⢓⢕⢕⢕⢕");
    puts("⢀⢇⢊⠢⡑⡌⡪⢪⠸⡨⡊⡎⡪⡪⡸⠐⠄⠂⡕⡕⡕⣕⢕⢕⢕⢕⢕⢕⢕⢕⢕⢕⢅⠢⢑⠐⡀⢂⠡⠐⡈⡐⠨⠨⠨⢂⠅⢅⢂⠢⠡⡂⡢⠪⡨⠨⠂⢡⠨⠢⡑⢌⢌⠢⡑⢌⠜⢌⢌⠢⡑⢌⠢⡑⢌⠢⡑⢌⠪⡨⠢⡑⢌⠢⡑⠌⠢⡁⡊⡐⠨⢐⠐⡐⠄⠅⡊⠜⡜⣜");
    puts("⢐⠌⡢⢑⢌⠢⡣⡑⡕⡱⡘⡌⡎⡢⠡⠡⢁⢕⢕⢕⢝⢜⢕⢕⠕⠡⠑⠑⡑⠑⡕⡑⠄⡑⡀⡂⡐⡀⡂⠡⢐⠨⠨⠨⡨⢂⠪⡐⡐⢅⠕⢌⠢⠑⡀⡢⢑⠅⢕⢑⢌⠢⠢⡑⢌⠢⡑⢅⠢⡑⢌⠢⡑⢌⠢⡑⢌⠢⡑⠌⢌⠢⢑⠨⠠⠁⠅⡀⠂⠄⠡⠐⢐⠀⡊⢐⠠⢁⠪⡪");
    puts("⢐⠅⡂⢕⢸⠨⡢⢣⢊⢆⢇⢕⠱⠐⠀⠢⡑⡜⡜⡜⣎⢗⢕⢅⠢⡡⠡⡁⡢⡑⡐⠄⡡⢀⠂⠔⡀⡢⠨⠨⡂⠌⢌⢊⠔⠡⡊⠔⢌⠢⡑⠁⡌⠔⢌⠢⡑⢌⠢⡑⡐⠅⢕⠨⡂⢕⠨⡂⢕⠨⡂⢕⠨⡂⢕⠨⡂⡑⠌⢌⠢⠨⢐⠨⢐⢁⢂⠂⠅⠌⠄⠅⢂⠂⡂⠂⠌⡐⠠⢹");
    puts("⠔⠡⢨⢂⢇⠕⡜⢌⢆⢣⢊⠆⠅⠂⡡⡑⡕⡕⡕⣕⢕⢕⢕⢢⢣⢣⠣⡑⡐⡐⠄⢅⠢⠡⡊⠔⡐⠌⢌⠌⡢⠡⡑⡐⠅⢕⢌⢊⠢⢁⠄⡕⢌⢊⠆⢕⠨⡂⠕⡨⢂⠅⢕⠨⢂⠕⡨⢂⢑⠌⡢⢑⠌⡢⢑⠌⡂⡪⠨⢐⠨⢈⠐⡈⠠⠐⠀⠨⠈⡈⠈⠌⢐⠐⠠⠁⠅⢂⠡⢪");
    puts("⠨⢈⠆⡕⡸⢨⢊⢆⠕⡅⡣⠈⠄⡂⢆⢕⢕⢕⢕⢕⢕⠕⡕⢕⠱⡡⢑⢐⢐⠌⢌⢂⠪⡨⢂⠕⢌⠌⡂⡪⢐⠅⡢⢊⢌⠢⠊⡀⡢⠡⡃⡪⢐⠅⡪⠐⠅⠌⢌⢂⠢⢑⠐⢅⠢⠡⡂⢅⠢⢑⠌⡂⢕⠨⡐⢅⢂⠂⠅⢂⠨⠀⡂⡐⡀⡂⠨⠀⡂⠠⠈⡀⠂⡈⠄⠡⠈⠄⠂⢜");
    puts("⠨⢐⠱⡨⡊⢆⢕⢸⠨⡂⠂⠨⢐⢕⠱⡸⡸⡸⡸⡸⡸⡨⡊⢆⠕⡨⢂⢂⠢⡡⡑⢔⢑⠌⡢⢑⢅⠪⡐⢌⠢⡑⠌⠂⢄⠢⡑⢌⠌⡪⢐⠨⢐⢁⠂⠅⢅⢑⢐⢐⠨⢐⠡⠡⢊⠌⡢⠡⡊⠔⡨⢐⠡⡂⡪⢐⠐⡈⢐⠀⡂⢁⠠⠐⡀⢂⢁⢂⠐⡈⠄⢂⠂⠄⡂⠨⠠⠁⠅⢪");
    puts("⡨⠢⡑⠔⡅⠕⡌⡢⢑⠀⠂⢌⢪⢂⢇⢣⢣⠣⡣⡑⡕⢌⠪⡐⠌⢔⠡⡂⢕⢐⠌⡢⢑⠌⡢⢑⠔⡑⢌⠢⠑⡈⠄⢕⠡⢊⠔⠡⡈⡂⡂⡑⡐⠄⠅⠅⢂⢐⠐⡐⠨⢐⠨⠨⢂⠪⡐⡡⠊⠌⠔⡠⢑⢐⢐⢐⢐⢐⢐⢐⢐⢐⠄⠅⡂⡂⡂⢂⠅⢂⢑⢐⢈⠢⠨⠨⠈⠌⠨⢐");
    puts("⠢⡑⢌⠪⡨⢊⠢⡊⠀⠄⡸⡸⠐⡕⢜⢜⠸⡨⢂⠪⡨⠂⢅⠢⠡⡑⡐⠌⡂⡢⠑⢌⠢⢑⠌⡢⠑⢌⠂⡁⠢⠨⡈⠢⠨⢐⢈⢂⢂⢂⢐⢀⠂⠌⠄⠅⢂⢐⠨⠠⢑⢐⠡⠡⡑⡐⡐⡐⠡⠡⢑⠌⡂⢂⢂⠐⠠⠠⠀⠂⠄⠂⠠⠁⠠⠀⡐⠀⡐⠀⠄⠠⠀⢂⠈⠄⡈⠄⡁⠢");
    puts("");
    puts("");

    if (room7points >= 96)
    {
        puts("");
        puts("            ,ggg,");
        puts("          dP\"\"8I");
        puts("         dP   88");
        puts("        dP    88");
        puts("       ,8'    88");
        puts("       d88888888");
        puts(" __   ,8\"     88");
        puts("dP\"  ,8P      Y8");
        puts("Yb,_,dP       `8b,");
        puts(" \"Y8P\"         `Y8");
        puts("                  ");
        puts("");
        puts("Grade: A. You passed, look forward to getting paid.");
        puts("");
    }

    else if (room7points >= 90)
    {
        puts("");
        puts("          /\\");
        puts("  ______ /  \\");
        puts(" |______/ /\\ \\");
        puts("       / ____ \\");
        puts("      /_/    \\_\\");
        puts("");
        puts("Grade: A-. Looks good on your resume at least?");
        puts("");
    }

    else if (room7points >= 87)
    {
        puts("");
        puts(" ______            ");
        puts("|_   _ \\    .-.    ");
        puts("  | |_) | __| |__  ");
        puts("  |  __'.|__   __| ");
        puts(" _| |__) |  | |    ");
        puts("|_______/   '-'    ");
        puts("");
        puts("Grade: B+. Second place is first place loser, could have been an -A.");
        puts("");
    }

    else if (room7points >= 83)
    {
        puts("");
        puts("8 888888888o   ");
        puts("8 8888    `88. ");
        puts("8 8888     `88 ");
        puts("8 8888     ,88 ");
        puts("8 8888.   ,88' ");
        puts("8 8888888888   ");
        puts("8 8888    `88. ");
        puts("8 8888      88 ");
        puts("8 8888    ,88' ");
        puts("8 888888888P    ");
        puts("");
        puts("Grade: B. Good enough, right?");
        puts("");
    }

    else if (room7points >= 80)
    {
        puts("");
        puts("                          ");
        puts("                          ");
        puts("/|                        ");
        puts("||                        ");
        puts("||                        ");
        puts("||  __     ,.----------.  ");
        puts("||/'__ '. //            \\ ");
        puts("|:/`  '. '\\\\            / ");
        puts("||     | | `'----------'  ");
        puts("||\\    / '                ");
        puts("|/\\'..' /                  ");
        puts("'  `'-'`                   ");
        puts("");
        puts("Grade: B-. Feels like third place.");
        puts("");
    }

    else if (room7points >= 77)
    {
        puts("");
        puts("       _..._                        ");
        puts("    .-'_..._''.                     ");
        puts("  .' .'      '.\\                   ");
        puts(" / .'                               ");
        puts(". '             .-.                 ");
        puts("| |             | |                 ");
        puts("| |         ,---| |---.             ");
        puts(". '         `---| |---'             ");
        puts(" \\ '.          .| |                 ");
        puts("  '. `._____.-'/`-'                 ");
        puts("    `-.______ /                     ");
        puts("             `                      ");
        puts("");
        puts("Grade: C+. C's get degrees... but A's get paid.");
        puts("");
    }

    else if (room7points >= 73)
    {
        puts("");
        puts("                      ");
        puts("        CCCCCCCCCCCCC ");
        puts("     CCC::::::::::::C ");
        puts("   CC:::::::::::::::C ");
        puts("  C:::::CCCCCCCC::::C ");
        puts(" C:::::C       CCCCCC ");
        puts("C:::::C               ");
        puts("C:::::C               ");
        puts("C:::::C               ");
        puts("C:::::C               ");
        puts("C:::::C               ");
        puts("C:::::C               ");
        puts(" C:::::C       CCCCCC ");
        puts("  C:::::CCCCCCCC::::C ");
        puts("   CC:::::::::::::::C ");
        puts("     CCC::::::::::::C ");
        puts("        CCCCCCCCCCCCC ");
        puts("                      ");
        puts("");
        puts("Grade: C. You barely made it, get out before the room makes The Phantom of Professor Garrett change his mind.");
        puts("");
    }

    else if (room7points >= 70)
    {
        puts("");
        puts("   ______         ");
        puts(" .' ___  |        ");
        puts("/ .'   \\_|______  ");
        puts("| |      |______| ");
        puts("\\ `.___.'\\        ");
        puts(" `.____ .'        ");
        puts("");
        puts("Grade: C-. I guess you're still stuck here, huh?");
        puts("");
    }

    else if (room7points >= 67)
    {
        puts("");
        puts(" ___    _|\"|_   ");
        puts("  |   \\  |_   _| ");
        puts("  | |) |   |_|   ");
        puts("  |___/   _____  ");
        puts(" _|\"\"\"\"\"|_|     | ");
        puts(" \"`-0-0-'\"`-0-0-' ");
        puts("");
        puts("Grade: D+. Gotta retry, ain't no way.");
        puts("");
    }

    else if (room7points >= 63)
    {
        puts("");
        puts("  ____    ");
        puts(" |  _\"\\   ");
        puts("/| | | |  ");
        puts("U| |_| |\\ ");
        puts(" |____/ u ");
        puts("  |||_    ");
        puts(" (__)_)   ");
        puts("");
        puts("Grade: D. You got smoked.");
        puts("");
    }

    else
    {
        puts("");
        puts("   _     _   ");
        puts("  (c).-.(c)  ");
        puts("   / ._. \\   ");
        puts(" __\\( Y )/__ ");
        puts("(_.-/'-\\-._) ");
        puts("   || F ||   ");
        puts(" _.' `-' '._ ");
        puts("(.-./`-\\.-.) ");
        puts(" `-'     `-' ");
        puts("");
        puts("Grade: F. You failed. The CSC 321 Room caught you real good. You might become a TA! and part of the rooms decoration!");
        puts("");
    }

    puts("");
    printf("Final Score: %d/100\n", room7points);
    puts("");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡀⠀⠀⠀⢀⣀⡠⠤⠴⠚⣿⠃\n");
    printf("⠀⠸⣿⡭⣭⣿⣽⣿⣿⣿⣿⣿⣿⣿⣽⣿⡿⠓⠚⠉⣉⣀⣤⡤⣴⠀⣿⠀\n");
    printf("⠀⠀⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⢰⠞⢩⠀⢻⡏⠀⡏⠀⣿⠄\n");
    printf("⠀⢠⣟⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⢸⠀⢸⠀⢸⡇⠀⠃⠀⣿⠂\n");
    printf("⠀⢘⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⢸⠀⢸⠀⢸⡇⠀⡇⠀⣿⡇\n");
    printf("⠀⠈⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⢸⠀⢸⠀⢸⡇⠀⣷⠀⣿⡇\n");
    printf("⠀⣠⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⢸⠀⢸⠀⢸⡇⠀⣿⣼⣿⡇\n");
    printf("⠀⡃⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⠘⠛⠛⠒⠛⠓⠛⠛⣿⣿⡇\n");
    printf("⠀⠀⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⢰⠦⢠⠀⢤⣤⣤⣄⠋⣿⡇\n");
    printf("⠀⠀⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⢸⠀⢸⠀⢸⡇⠈⣿⠀⣿⡇\n");
    printf("⠀⢸⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⢸⠀⢸⠀⢸⡇⠀⣿⠀⣿⡇\n");
    printf("⠀⠀⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⢸⣄⢸⠠⣼⡇⠀⣿⠀⣿⡇\n");
    printf("⠀⣸⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⠀⠉⠉⠀⠛⠚⠯⠿⠀⣿⡇\n");
    printf("⠠⢿⣿⣷⣶⣶⣶⠶⢶⡶⢶⣶⣶⣶⣶⢿⣶⣤⣄⣀⣀⠀⠀⠀⢨⠀⣿⡇\n");
    printf("⠀⠀⠀⠈⠀⠐⠒⠒⠀⠀⠀⠘⠁⠈⠀⠀⠀⠀⠉⠉⢛⠉⠑⠒⠠⠤⢿⠇\n");
    puts("");
    puts("The Real Professor Garrett got you out of room 7 anyways...");
    puts("");
    puts("");
}

// End of Room 7 Functions



