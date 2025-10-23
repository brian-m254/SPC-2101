//programe to convert fahrenheit to celcius
/*
Name:Brian Masakhwe
REG NO:PA106/G/28765/25
*/

#include <stdio.h>

float convert_to_Celcius(float fahrenheit);

int main()
{
	float C,F;
	
	printf("Enter your temperature in fahrenheit: ");
	scanf("%f",&F);
	
	C=convert_to_Celcius(F);
	
	printf("The temperature is=%.2f celcius\n",C);
	return 0;
}

float convert_to_Celcius(float fahrenheit)
{
	float result;
	result=(fahrenheit-32)*5/9;
	return result;
}