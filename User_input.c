/*
Name: George Kimani
Reg No: CT100/G/26222/25
Description: Declaring and Initializing variables 
Date: 18/9/2026
*/

#include <stdio.h>
int main(){

    //Declaring and Initializing variables
    char grade ; //%c
    int age ; //%d
    float marks ; //%f
    double pi ; //%lf
    char name [15] ; //%s

printf("What is your name: \t");
scanf("%s", &name);

printf("How old are you: \t");
scanf("%d", &age);

printf("How many marks did you score in KCSE: \t");
scanf("%f", &marks);

printf("What is the value of pi: \t");
scanf("%lf", &pi);

printf("Enter your grade: \t");
scanf(" %c", &grade);


printf("The grade is %c\n", grade);
printf("My name is %s\n", name);
printf("I am %d years old\n", age );
printf("I scored %.2f marks in KCSE\n", marks);
printf("The value of pi is %.3lf\n", pi);

return 0;
}

