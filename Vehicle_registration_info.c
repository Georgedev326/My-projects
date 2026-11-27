 /*
 Name: George Kimani
 REG: CT100/G/26222/25
 Description:A vehicle registration report program using C structures
 Date : 22/9/2026
 */

#include<stdio.h>
//structure defination
struct vehicle{
    char registration[20];
    char model[20];
    char manufacture[50];
    int yearOfManufacture;
    float rentalCharge;
};

int main(){
    //structure declaration (variable of type vehicle)
struct vehicle v;
 //the user is prompted to enter the vehicle registration details
printf("Enter the vehicle's registration No. : \t");
scanf("%9[^\n]", v.registration);
printf("Enter the model of the vehicle :\t");
scanf(" %19[^\n]", v.model);
printf("Enter the manufacture of the vehicle :\t");
scanf(" %49[^\n]", v.manufacture);
printf("Enter the year of manufacture :\t");
scanf("%d", &v.yearOfManufacture);
printf("Enter the daily rental charged :\t");
scanf("%f", &v.rentalCharge);
// the vehicle's registration details are desplayed
printf("\n------------------------------\n");

printf("VEHICLE REGISTRATION REPORT \n");

printf("------------------------------\n");

printf("Registration No.  :%s\n", v.registration);
printf("Vehicle Model     :%s\n", v.model);
printf("Manufacture       :%s\n", v.manufacture);
printf("Year Manufactured :%d\n", v.yearOfManufacture);
printf("Daily Rental Fee  :KShs%.2f\n", v.rentalCharge);


    return 0;
}