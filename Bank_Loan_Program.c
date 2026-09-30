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
/* if the age is greater than or it is equal ro 21yrs and the customer has an annual inome of 21000 or more,
 then the customer qualifies for a loan. If the age is less than 21yrs and the income is less than 21000,
  then the customer does not qualify for a loan.*/
    if(age >=21 && income >= 21000){
        printf("congratulations! You qualify for a loan  \n");
    }
    else if(age <=21 && income <=2100){
        printf("Unfortunately, we are unable to offer you a loan at this time \n");
    }
    
return 0;
}
