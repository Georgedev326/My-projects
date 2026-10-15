/*
Name: George Kimani K.
Reg:CT100/G/26222/25
Description: A SIMPLE NUMBER GUESSING GAME 
Date: 15/10/2026
*/
# include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //picking the secret number randomly
    srand(time(NULL)); //seeds the random number generator with the current time.
    int secret = rand()%20 + 1;//gives a number from 0-19, and shifts it to 1-20
    int guess; //this will hold what number the user will guess.
//while loop to keep asking the user to guess until they get the correct number 
     printf("WELCOME TO THE NUMBER GUESSING GAME!\n");    
do{
        printf("Guess a number(1-20):");
        scanf("%d", &guess);
        
        if(guess > secret)
        printf("Too high!\n");

        else if(guess < secret)
        printf("Too low!\n");

        else 
           printf("Congratulations!\n");
           
           
    }while(guess != secret);
//the games endat this oint if the user inputs the correct number
    return 0;

}