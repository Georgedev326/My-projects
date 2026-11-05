/*
Name: George Kimani Kamau
Reg No: CT100/G/26222/25
Description: A simple program to convert temperature from Fahrenheit to Celsius
Date: 11/5/2026
*/
# include <stdio.h>

int main(){
float celsius, fahrenheit;
printf("Enter the temperature in Fahrenheit: \t"); //the user will enter the desired temperature in Fahrenheit
scanf("%f", &fahrenheit);
 

 celsius = (fahrenheit - 32) * 5/9; //formula to convert Fahrenheit to Celsius

 printf("The temperature is: %.2f  celsius \n", celsius); //display the temperature in Celsius

 return 0;

}