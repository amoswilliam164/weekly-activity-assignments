/*
Name   : Amos William
Adm No : BCS-02-0076/2026
Course : Computer Science
Unit   : Structured Programming And Algorithms
Program: Bank loan Program
*/

#include <stdio.h>
int main()
{
	int age, income;//%d
	
	printf("Enter the age:");
	scanf("%d", &age);
	
	printf("Enter the Income:");
	scanf("%d", &income);
	
	if(age>=21 && income>=21000){
		printf("Congratulations you qualify for a loan.\n");
		}
	else{
		printf("Unfortunately, we are unable to offer you a loan at this time.");
	}
	
	
	return 0;
}