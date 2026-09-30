/*
Name: George kimani
Reg: CT100/G/2622/25
Description: Bank loan program
Date: 30/9/2026 */

#include <stdio.h>

int main(){
    float age, income;
    printf("Enter your age: \t", age);
    scanf("%f", &age);
    printf("Enter your income: \t", income);
    scanf("%f", &income);

    if(age >=21 && income >= 21000){
        printf("congratulations! You qualify for a loan  \n");
    }
    else if(age <=21 && income <=2100){
        printf("Unfortunately, we are unable to offer you a loan at this time \n");
    }
    
return 0;
}
