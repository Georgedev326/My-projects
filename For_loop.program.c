/*
Name: George Kimani
REG: CT100/G/26222/25
Description: For loop program displaying numbers, 100-50 in a descending order.
Date: 6/10/2026
*/
#include <stdio.h>

int main() {
int i;
//Use for loops to display number 100-50

    for ( i = 100; i >= 50; i--) {
        //print each and every number to its own line.
        printf("%d\n", i);
    }

    return 0;
}