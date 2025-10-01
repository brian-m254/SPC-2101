//Water bill calculator 
/*
NAME: BRIAN MASAKHWE 
REG NO:PA106/G/28765/25
Description: Programme to write a water bill calculator 
*/

#include<stdio.h>
int main(){
float units, total_water_bill;

//Prompting the user to enter the number of units used
printf("Enter the number of units used ");
scanf("%f",&units);

//Calculation of the total water bill
if(units <=30){
total_water_bill=units*20;
}
else if(units>30 && units <=60)
{
total_water_bill=units*25;
}
else if(units>60)
{
total_water_bill=units*30;
}

//Displaying the total water bill in 2 decimal places
printf("Total water bill. %.2f KES\n",total_water_bill);

return 0;
}