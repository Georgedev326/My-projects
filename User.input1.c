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
    int Phone ; //%d

    printf("What is your height? \t");
    scanf("%f", &height);

    printf("What is your Bank balance? \t");
    scanf("%lf", &Bank);

    printf("What is your pnone number? \t");
    scanf("%d", &Phone);

    printf("My height is %.2f\n", height);
    printf("My bank balance is %.2lf\n", Bank);
    printf("My phone number is %d\n", Phone);

    return 0;
}

 