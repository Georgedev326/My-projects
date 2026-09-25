/*
Name: George Kimani
REG: CT100/G/26222/25
Description : User input for the volume and surface area of a cylinder.
Date:25/9/2026
*/

#include <stdio.h>
int main(){
    float raduis, height, volumee, surfaceArea; //%f
    const float pi =3.142; //value of pi

    printf("What is the height of the cylinder(in centimeters)? \t");
    scanf("%f", &height);

    printf("What is the radius of the cylinder(in centimeters)? \t");
    scanf("%f", &raduis);

    //Formula for volume and surface area of a cylinder
    volumee = pi * raduis * raduis * height;
    surfaceArea = (2 * pi * raduis * raduis) + (2 * pi * raduis * height);

    printf("Radius =%.2f cm\n", raduis);
    printf("Height =%.2f cm\n", height);
    printf("The volume of the cylinder is: %.2f cubic centimeters\n", volumee);
    printf("The surface area of the cylinder is: %.2f square centimeters\n", surfaceArea);
    return 0;
}
