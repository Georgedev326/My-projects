/*
Name: George Kimani
Reg: CT100/G/26222/25
Description: A library program to store title of books borrowed
Date: 17/11/2026 */
# include <stdio.h>
# include <stdlib.h> //exit
 //function prototype
//void writeToFile();
void appendToFile();

int main(){
       //writeToFile();
       appendToFile();
    return 0;
}
//Function defination: write to file
void appendToFile(){
    FILE *title;
    char booktitle[100];
 
    title = fopen("C:\\Users\\Admin\\Desktop\\C practice\\borrowed_books.txt", "a");
//check the file opened
if (title == NULL){
    printf("Error opening the file \n");
    exit(1);
}   
//the user should enter the title of book borrowed 
printf("Enter the title of the Book borrowed: \n");
fgets(booktitle, sizeof(booktitle), stdin);

//write the string into the file
fputs(booktitle, title);

printf("Title is successfully stored. \n");

fclose(title);
}
