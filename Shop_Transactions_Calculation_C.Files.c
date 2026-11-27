/*
Name: George Kimani
REG: CT100/G/26222/25
Description: Small retail shop transaction program - C Files
Date: 27/11/2026
*/

#include <stdio.h>
#include <stdlib.h>

// Function prototype
void calculateTotalSales(void);

int main() {
    calculateTotalSales();

    return 0;
}

// Function definition
void calculateTotalSales(void) {
    FILE *sales;
    float transaction;
    float totalSales = 0;

    // Open the file in read mode
    sales = fopen("sales.txt", "r");

    // Check whether the file opened successfully
    if (sales == NULL) {
        printf("Error opening the file.\n");
        exit(1);
    }

    // Read each transaction and add it to the total
    while (fscanf(sales, "%f", &transaction) == 1) {
        totalSales += transaction;
    }

    // Display the total sales
    printf("Total sales for the day: %.2f\n", totalSales);

    // Close the file
    fclose(sales);
}