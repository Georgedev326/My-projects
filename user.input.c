 /*
 Name: George Kimani
 REG: CT100/G/26222/25
 Description: Program with user input
 Date : 22/9/2026
 */

 #include <stdio.h>
 int main(){
    float height ; //%f
    double Bank ; //%lf
    char Phone[20]; //%s

    printf("What is your height(in meters)? \t");
    scanf("%f", &height);

    printf("What is your Bank balance(in Ksh)? \t");
    scanf("%lf", &Bank);

    printf("What is your phone number? \t");
    scanf("%s", Phone);

    printf("My height is %.2f m\n", height);
    printf("My bank balance is Ksh.%.2lf\n", Bank);
    printf("My phone number is %s\n", Phone);

    return 0;
 }