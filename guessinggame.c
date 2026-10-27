#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;

    srand(time(NULL));
    secret = rand() % 20 + 1;   

    printf("I'm thinking of a number between 1 and 20.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret) {
            printf("Too high!\n");
        } else if (guess < secret) {
            printf("Too low!\n");
        } else {
            printf("Congratulations!\n");
        }
    } while (guess != secret);

    printf("It took you %d attempt(s) to guess the number.\n", attempts);

    return 0;
}
