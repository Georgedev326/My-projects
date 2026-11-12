/*
Name: George Kimani
Reg: CT100/G/26222/25
Description: A simple program to monitor room occupancy in a hotel using 2D array
Date: 11/12/2026
*/
#include <stdio.h>
#include <stdlib.h>   // will be used for rand() and srand()
#include <time.h>     // for time

int main() {
    int occupancy[5][10];     // 5 floors (rows), 10 rooms per floor (columns)
    int i, j; //i= rows , j= columns
    int occupied, vacant;

    srand(time(NULL));        // will seed the random generator


    // fillin the array with random 1s and 0s
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 10; j++) {
            occupancy[i][j] = rand() % 2;
        }
    }

   
    for (i = 0; i < 5; i++) {  // display each floor and its counts
        occupied = 0;
        vacant = 0;

  printf("Floor %d: ", i + 1);
      for (j = 0; j < 10; j++) {
            printf("%d ", occupancy[i][j]);

            if (occupancy[i][j] == 1) {
                occupied++;
            } else {
                vacant++;
            }
        }
        printf("\n         Occupied = %d, Vacant = %d\n\n", occupied, vacant);
    }

    return 0;
}