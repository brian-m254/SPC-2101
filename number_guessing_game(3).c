/*
Name:Brian Masakhwe
Reg No:PA106/G/28765/25
Description:PROGRAM FOR A NUMBER GUESSING GAME
*/
#include <stdio.h>
int main(){
	int secret_num,guess;
	int attempts=1;
	secret_num=7;
	
	printf("Guess the number (between 1-20): \n");
	printf("Enter your guess: " );
	scanf("%d", &guess);

	while(guess != secret_num){
		if(guess > secret_num){
			printf("Too high!\n");
			}else {
				printf("Too low!\n");
			}
			attempts++;
			printf("Guess again: \n");
			scanf("%d", &guess);
	}
	printf("Congratulation!\n");
	printf("You guessed the number in %d attempts!\n", attempts);
	return 0;
}