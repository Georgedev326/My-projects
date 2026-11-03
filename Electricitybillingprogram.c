/*
Name: GEORGE KIMANI
REG: CT100/G/26222/25
Description: A simple electricity billing program 
Date: 3/11/2026
*/
# include <stdio.h>
//function prototype
float calculateBill(float unitnumber);

int main(){
    float unitnumber, result, finalamount;
    printf("Enter the number of units consumed: \t");
    scanf("%f", &unitnumber);
    //funtion call
    result = calculateBill(unitnumber);
    finalamount= result;
    
    printf("\nKUTUS ELECTRIICTY BULLING SYSTEM\n");
    printf("====================\n");

    printf("The total bill is: %.2f \n",finalamount);
    printf("The number of units consumed: %.2f \n", unitnumber);

        printf("====================\n");
return 0;
}
// function defination
float calculateBill(float unitnumber){
    float bill = 0;
    if(unitnumber <= 100){
        bill = unitnumber * 10;


    }

    else if(unitnumber <= 200){
        bill = 100 * 10 + (unitnumber - 100) * 15;

    }
    else {
        bill = 100 * 10 + 100 * 15 + (unitnumber - 200) * 20  ;

    }

    return bill;
}