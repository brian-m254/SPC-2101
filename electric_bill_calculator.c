//C function to calculate electric bill
/*
Name:Brian Masakhwe
REG NO:PA106/G/28765/25
*/

#include <stdio.h>

int total_electric_bill(int units,int amount);

int main()
{
	int units,amount;
	
	printf("enter the amount of units consumed: ");
	scanf("%d",&units);
	
	if(units<=100){
		amount=units*10;
	}
	else if(units>100 &&units<=200){
	amount=units*15;
	}
	else if(units>200){
	amount=units*20;	
	}
	
	printf("total electric bill= %d\n",amount);
	return 0;
}

int total_electric_bill(int units,int amount)
{
	int result;
	result=amount;
	return result;

}
