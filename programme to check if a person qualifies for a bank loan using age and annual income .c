//Programme to check if a person qualifies for a loan using age and annual income
/*
Name:Brian Masakhwe
REG no :PA106/G/28765/25
Description: programme to check if a person qualifies for a bank loan using age and annual income
*/

#include<stdio.h>
int main() {

int age;
float income;

printf("Enter your age: ");
scanf("%d",&age);

printf("What is your annual income: ");
scanf("%f",& income);

if(age>=21 && income>=21000){
printf("Congratulations you qualify for the loan\n");
}else{
printf("Unfortunately we are unable to offer you a loan at this time");
}

return 0;
}