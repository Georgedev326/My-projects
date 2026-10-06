/*
Name: George Kimani
REG: CT100/G/26222/25
Description: Mobile Data Bundle Program
Date: 6/10/2026
*/
# include <stdio.h>
int main(){
  
    int choice;
    
//Display the menu
printf("\n");
printf("Mobile Data Bundle Purchase. \n");
printf("1: 100MB  @  KES.50 \n");
printf("2: 500MB  @  KES.200 \n");
printf("3: 1GB    @  KES.350  \n" );
printf("4: 2GB    @  KES.600  \n ");
//Ask the user to select a bundle option

printf("Reply with either option(1-4) \t"); 
scanf("%d", &choice);
printf("\n");
printf("===================\n");

// switch   statement to display the bundle selected and its cost.
 switch (choice ){ 
    case 1:
    printf("You selected 100MB  @  KES.50 \n" );
    break;

    case 2:
    printf("You selected 500MB  @  KES.200 \n" );
    break;

    case 3:
    printf("You selected 1GB  @  KES.350 \n" );
    break;

    case 4:
    printf("You selected 2GB  @  KES.600 \n" );
    break;

    default:
    printf("Invalid option.\n");
 }

return 0; 
}
