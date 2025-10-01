//Programme to check for exam eligibility for students 
/*
NAME: BRIAN MASAKHWE 
REG NO :PA106\G\28765\25
Description : programme to check eligibility for exams for students 
*/

#include <stdio.h>

int main() {
    float attendance, average_Marks;

    
    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    
    printf("Enter average marks: ");
    scanf("%f", &average_Marks);

    // Check eligibility
    if (attendance >= 75 && average_Marks >= 40) {
        printf("Student is eligible for final exams.\n");
    } else {
        printf("Student is NOT eligible for final exams.\n");
    }

    return 0;
}