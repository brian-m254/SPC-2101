/*
Name:Brian Masakhwe
Reg NO:PA106/G/28765/25
Description:PROGRAM THAT ALLOWS USERS TO WITHDRAW MONEY FROM THEIR BANK ACCOUNT UNTILL THE BALANCE IS ZERO OR NEGATIVE 
*/

#include <stdio.h>
int main(){
	float balance =10000;
	float withdrawal;
	
	printf("Current balance is 10000\n");
	while(balance >0){
		printf("Enter amount to withdraw: ");
		scanf("%f", &withdrawal);
		if (withdrawal > balance) {
			printf("Insufficient funds!\n");
		} else{
			balance = balance - withdrawal;
			printf("Remaining balance: %.2f\n", balance);
		}	
		if (balance <= 0)
			printf("Account balance is 0");
	}
	
	
	return 0;
}