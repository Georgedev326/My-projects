/*
Name: GEORGE KIMANI
Reg: CT100/G/26222/25
Description: A simple program to monitor room occupancy in a hotel using 3D array
Date: 12/11/2026
*/
# include <stdio.h>
# include <stdlib.h> // will be used for rand() and srand()
# include <time.h> // used for time

int main(){
 int chain[3][5][10];
 int i, j, k ; 
 int occupied, total=0;
 srand(time(NULL)); // will seed the random generator

printf("\n  HOTEL ROOM OCCUPANCY MANAGEMENT SYSTEM \n");


     // fillin the array with random 1s and 0s

 for (i=0; i< 3; i++){
for (j=0; j < 5; j++){
for(k=0; k < 10; k++){
    chain[i][j][k] = rand() %  2;
}
}
 }
 // display each floor and its counts
for (i = 0; i < 3; i++){
    occupied =0;
    printf("Branch %d:", i + 1);
    for (j=0; j<5; j++){
        for(k=0; k < 10; k++){
        printf("%d ", chain[i][j][k]);

        if (chain[i][j][k] == 1){
            occupied++;
        }
    }
}
         total = total + occupied ; // formula(sum)
printf("\n");
}
printf("\n Total number of occupied rooms across all branches: %d\n", total); //to dispaly the total no. of the rooms accopied
   return 0;

}