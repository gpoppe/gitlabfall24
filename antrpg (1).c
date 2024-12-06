void room26() {
    int inventory[5] = {0}; // Array to track collected items (0: no item, 1: item collected)
    int food_count = 0;     // Food collected count
    int decision;           // Player's choice
    int success_chance;     // Random success chance
    srand(time(NULL));      // Initialize random number generator

    printf("\nWelcome to Room 26: The Ant's Adventure!\n");
    printf("You are an ant on a mission to gather food and protect your colony.\n");
    printf("Make wise decisions to succeed in your adventure.\n\n");

    while (food_count < 3) {
        printf("\nWhat will you do next?\n");
        printf("1. Search for food\n");
        printf("2. Build a bridge over a puddle\n");
        printf("3. Fight off a predator\n");
        printf("4. Explore a new area\n");
        printf("5. Return to the colony\n");
        printf("Choose an action (1-5): ");
        scanf("%d", &decision);

        switch (decision) {
            case 1: // Search for food
                success_chance = rand() % 2; // 50% success chance
                if (success_chance == 1) {
                    printf("You found a crumb of bread!\n");
                    inventory[0] = 1; // Mark bread as collected
                    food_count++;
                } else {
                    printf("No food here. Keep searching.\n");
                }
                break;

            case 2: // Build a bridge
                success_chance = rand() % 100 + 1; // Random success percentage
                if (success_chance > 50) {
                    printf("You successfully built a bridge using leaves and twigs!\n");
                    food_count++;
                } else {
                    printf("Your bridge collapsed. Try again.\n");
                }
                break;

            case 3: // Fight off a predator
                success_chance = rand() % 100 + 1;
                if (success_chance > 70) {
                    printf("You successfully fought off the predator!\n");
                    food_count++;
                } else {
                    printf("The predator overwhelmed you. Be more careful next time!\n");
                }
                break;

            case 4: // Explore a new area
                success_chance = rand() % 3; // Random outcome
                if (success_chance == 0) {
                    printf("You discovered a seed!\n");
                    inventory[1] = 1; // Mark seed as collected
                    food_count++;
                } else if (success_chance == 1) {
                    printf("You encountered a dangerous spider and had to retreat.\n");
                } else {
                    printf("You found a shiny pebble. It's not food, but it looks nice.\n");
                }
                break;

            case 5: // Return to the colony
                if (food_count >= 3) {
                    printf("You safely returned to the colony with enough food. Well done!\n");
                    return; // Exit the room
                } else {
                    printf("You don't have enough food yet. Keep exploring!\n");
                }
                break;

            default:
                printf("Invalid choice. Please choose a valid action.\n");
        }
    }

    printf("\nCongratulations! You've gathered enough food and avoided dangers. You win!\n");
}