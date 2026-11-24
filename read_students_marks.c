/*
NAME: GEORGE KIMANI
REG: CT100/G/26222/25
DESCRIPTION:  A program that reads & displays all student records from the binary file.
DATE: 11/24/2026 */

#include <stdio.h>
//Define a structure to hold student info
struct Student {
    char name[50]; 
    char regNo[30];
    float marks;
};

int main() {
 //Declare a structure variable to hold each students record
    struct Student s;

    // Open the binary file in read mode
    FILE *fp = fopen("results.dat", "rb"); //"rb" means read binary

    //checks whether the file has opened successfully
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nSTUDENT EXAMINATION RESULTS\n");

    // Read all student records one at a time until the end of the file
    while (fread(&s, sizeof(struct Student), 1, fp) == 1) {
//Displays the student details
        printf("Name: %s\n", s.name);
        printf("Marks: %.2f\n", s.marks);

    }

    fclose(fp);

    return 0;
}
