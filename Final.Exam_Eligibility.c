/*
Name: George Kimani
Reg: CT100/G/2622/25
Description: Final Exam Eligibility
Date: 1/10/2026
*/
# include <stdio.h>
int main(){
    float attendance, marks;
    printf("Student's attendance: \t", attendance);
    scanf("%f", &attendance);
    printf("student's average marks: \t", marks);
    scanf("%f", &marks);
// if the students attendance for the semester is above 75% and the average marks is 40%, then the students is eligibe
    if(attendance>=75 && marks>=40){
        printf("congratulations you are Eligible for the final exams. \n");
    }
 //if the student's attendance for the semester is less than 75% and the average marks is less than 40%, then the student is not eligible
    else if(attendance <=75 && marks<=40){
        printf("Unfortunately, you are Not eligible for the final exams. \n");
    }
    
return 0;
}
