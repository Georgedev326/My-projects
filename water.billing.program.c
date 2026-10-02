/*
Name: George Kimani
Reg: CT100/G/26222/25
Description: A simple water billing program 
Date: 2/10/2026
*/
# include <stdio.h>
//function protoytype
float calclulateBill(float unit_number);

int main(){
    float unit_number, result, final_amount;
    printf("Enter the number of units consumed: \t");
    scanf("%f", &unit_number);
    //function call
    result = calclulateBill(unit_number);
    final_amount= result;

    printf("\n");
printf("WATER BILL PROGRAM \n");
printf("=================== \n");
printf("The number of Units Consumed: %.2f \n", unit_number);
printf("The total water bill: %.2f \n", final_amount);
printf("=================== \n");
return 0;
}
//function definition
float calclulateBill(float unit_number){
    float bill;
     if (unit_number <= 30) {
        bill = unit_number * 20;
    }
    else if (unit_number <= 60) {
        bill = unit_number * 25;
    }
    else {
        bill = unit_number * 30;
    
    }
    return bill;
}