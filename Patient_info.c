#include <stdio.h>


struct myPatient {
    char name[50]; //patient name
    long ID; //patient's ID
    int age; //patient's age
    char gender[20]; //patient's gender
    char diagnosis[50]; //diagnosis
    int days; //no. of days admitted
    char myNum;
    
};

int main(){
//creation of struct variable
     struct myPatient s;
    
     //The user will input the pateint's info
    printf("Enter the name of the patient: \t");
    scanf("%s",  s.name);
    printf("Enter the patient's ID: \t");
    scanf("%ld", &s.ID);
    printf("Enter the age of the patient \t");
    scanf("%d", &s.age);
    printf("Enter the gender of the patient \t");
    scanf("%s", s.gender);
    printf("Patient's diagnosis : \t");
    scanf("%s", s.diagnosis);
    printf("Number of days admitted \t");
    scanf("%d", &s.days);
   


     //display all the patients info

     printf("\n-----------------------\n");
     printf("\nPATIENT ADMISSION REPORT\n");
     printf("\n------------------------\n");

      printf("Patient Name :  %s\n", s.name);
     printf("Patient ID   :%ld \n", s.ID);
      printf("Age          :%d\n ", s.age);
      printf("Gender       :%s\n", s.gender);
     printf("Diagnosis    :%s\n", s.diagnosis);
      printf("Days Admitted:%d\n", s.days);

return 0;
}