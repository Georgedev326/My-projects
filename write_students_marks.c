/*
NAME: GEORGE KIMANI
REG: CT100/G/26222/25
DESCRIPTION: A structure to hold the student information.
DATE: 11/24/2026 */
#include <stdio.h>
// the structure will store the students's info
struct Student { 
    char name[50]; //stores name
    char regNo[30];//stores the registration No.
    float marks;//stores the marks
};

int main() {
    //Declaration of a variable to hold students details
    struct Student s;
    //We first open the binary file in append mode
    //"ab" will create the file if it did not exist and adds the new record without deleting the exixsting ones

    FILE *fp = fopen("results.dat", "ab");

    //check if the file has opened successfully
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;//this terminates the program if an error occurs
    }

    printf("Enter student name: ");//the user will be prompted to the details
    scanf(" %49[^\n]", s.name);

    printf("Enter registration number: ");
    scanf("%29s", s.regNo);

    printf("Enter total marks: ");
    scanf("%f", &s.marks);

    fwrite(&s, sizeof(struct Student), 1, fp);

    fclose(fp);

    printf("\nStudent record saved successfully!\n");

    return 0;
}
