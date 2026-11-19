#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber;
    int guess;
    int attempts = 0;

    // Generate a random number between 1 and 20
    srand(time(0));
    secretNumber = (rand() % 20) + 1;

    printf("RANDOM NUMBER GAME\n");
    printf("________________________\n");
    printf("\nI have picked a number between 1 and 20.\n");
    printf("Try to guess it!\n\n");

    // Keep asking until the guess is correct
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secretNumber) {
            printf("Too high!\n\n");
        }
        else if (guess < secretNumber) {
            printf("Too low!\n\n");
        }
        else {
            printf("Congratulations!\n");
            printf("You guessed it in %d attempts.\n", attempts);
        }

    } while (guess != secretNumber);

    return 0;
}