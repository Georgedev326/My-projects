/*
Name: GEORGE KIMANI KAMAU
Reg No: CT100/G/26222/25
Description: A simple password login system using a do-while loop
Date: 27/10/2026
*/
# include <stdio.h>
int main(){
	printf("PASSWORD LOGIN SYSTEM \n");
	  int password =1234; //declares the variable to store the password
	  
	  do{
		  printf("Enter the password to login: \t "); // the user is prompted to enter the password
		  scanf("%d", &password); //it will read the password entered by the user
	  }
	  while(password != 1234); // repeats the loop as long as the correct password is not entered
//1234 is the correct password, once the user inputs it, the loop ends
      printf("Access granted \n");
	  
	  return 0;
}