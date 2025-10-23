// C fuction for calculation of fare
/*
Name:Brian Masakhwe
REG NO:PA106/G/28765/25
*/

#include <stdio.h>

int total_fare(int distance,int amount);

int main()
{
	int distance,amount;
	
	printf("Enter the distance travelled in kilometers: ");
	scanf("%d",&distance);
	
	amount=distance*50;
	
	
	printf(" Your total fare=ksh%d\n",amount);
	return 0;
}
int total_fare(int distance,int amount)
{
int result;
result=amount;
return result;
}