/*
Name:Brian Masakhwe
Reg No:PA106/G/28278/25
Description:PROGRAM THAT KEEPS PROMPTING USER UNTILL THE CORRECT PASSWORD IS ENTERED
*/

#include <stdio.h>
int main(){
	int password = 1234;
	int attempt; //for wrong password//
	
	do{
	printf("Enter correct password to log in: \n");
	scanf("%d", &attempt);
	
	if(attempt != password){
		printf("Incorrect password! Try again.\n");
	}
	
	}while(attempt != password);
	printf("Access granted!");
	
	return 0;
} 