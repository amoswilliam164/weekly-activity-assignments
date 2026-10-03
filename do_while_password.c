/*
Name   : Amos William
Adm No : BCS-03-0076/2026
Course : Computer Science
Unit   : Structured Programming And Algorithms
Program: Do While for Password System
*/

#include <stdio.h>
int main()
{
	int password = 1234;
	int attempt;
	
	printf("    PASSWORD SYSTEM CHECK\n\n");
	
	printf(" Enter the Pasword:");
	scanf("%d", &password);
	
	do{
		
		printf(" Incorrect password!\n");
		printf("\n Please enter the corect password:");
		scanf("%d", &password);
		attempt++;
		
	}while(password!=1234);
	
	printf("\n Succesful");
	printf("\n Access Granted");
	
	
	return 0;
}