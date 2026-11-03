/*
Name: GEORGE KIMANI
REG: CT100/G/26222/25
Description: A simple electricity billing program 
Date: 3/11/2026
*/
# include <stdio.h>
//function protoype
float calculateFare(float distance);
int main(void){
    float distance, fare;
    printf("Enter the distance to travel(Km): \t"); //The user will enter the desired distance to travel
    scanf("%f", &distance);
		
	
    
 //function call
 fare = calculateFare(distance);

 
 printf("The total Fare is:Ksh %.2f \n",fare);
 printf("The total distance covered is:Km %.2f \n", distance);
 

 return 0;
}
  //function defination
 float calculateFare(float distance){
	 
return distance * 50;

}
