/*
Name: George Kimani K.
Reg:CT100/G/26222/25
Description: A SIMPLE NUMBER GUESSING GAME 
Date: 15/10/2026
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Pick a random secret number
    srand(time(NULL)); //seeds the random number generator with the current time 
    int secret = rand() % 20 + 1; //gives a number from 0-19, and shifts it to 1-20

    int guess; //this will hold what the number the user will guess.
// while loop to keep asking the user to guess a number until they get answer.
    int attempts = 0;  // Count the guesses

    printf("WELCOME TO THE NUMBER GUESSING GAME!\n");

    do {
        printf("Guess a number (1-20): ");
        scanf("%d", &guess);

        attempts++;  // Increase count after each guess

        if (guess > secret) {
            printf("Too high!\n");
        }
        else if (guess < secret) {
            printf("Too low!\n");
        }
        else {
            printf("Congratulations!\n");
            printf("You guessed correctly in %d attempts!\n", attempts);
        }

    } while (guess != secret);

    return 0;
}
