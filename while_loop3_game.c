/*
Name   : Amos William
Adm No : BCS-03-0076/2026
Course : Computer Science
Unit   : Structured Programming And Algorithms
Program: Guess Game
*/

#include <stdio.h>
int main(int argc, char** argv)
{
	int secret=12;
	int guess_number;
	int attempt=1;
	
	printf("       GUESS GAME\n\n");
	
	printf("    Attempt %d", attempt);
	printf("\nEnter your guess number:");
		scanf("%d", &guess_number);
	
	while(guess_number!=secret){
		if(guess_number<1||guess_number>20){
			printf("Number must be between 1 and 20!\n");

		}
		else if(guess_number>12&&guess_number<=20){
			printf("The Guess number is Too high!");

		}
		else if(guess_number>0&&guess_number<12){
			printf("The Guess number is Too low!");

		}
		
		//loop process
		printf("\n\n    Attempt %d", attempt+1);
		printf("\nEnter anoher  guess number again:");
		scanf("%d", &guess_number);
		attempt++;
		
		
	}    
	printf("Congratulation, you won!");
	printf("\nThe Total number of Attempts is:%d\n", attempt);
		
	
	
	return 0;
}
