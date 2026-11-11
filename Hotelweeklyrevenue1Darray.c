/*
Name : George Kimani K 
REG: CT100/G/2622/25
Description: Hotel weekly revenue tracker using 1D array
Date: 11/11/2026
*/
# include <stdio.h>
int main(){
    int i, sum = 0;
    int revenue[7];

    printf("\n HOTEL WEEKLY REVENUE TRACKER \n");

 printf("Enter the revenue each day: \t");

 for (i = 0; i < 7; i++ ){
    printf("\n revenue %d \t",i + 1);
    scanf("%d", &revenue[i]);
    sum = sum + revenue[i];
 }

//printf("\n The :");
//for (i =0; i <7; i++){
  //  printf("%d", revenue[i]);
//}
 
  printf("\n The total weekly revenue: %d \n", sum);
  printf("The average daily revenue: %.2f \n", sum / 7.0 );


    return 0;
}