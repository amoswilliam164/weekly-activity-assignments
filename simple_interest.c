/*
Name   : Amos William
Adm No : BCS-02-0076/2026
Course : Computer Science
Unit   : Structured Programming And Algorithms
Program: Simple Interest Calculation
*/

#include <stdio.h>
int main()
{
	int principal_amount, time; //%d
	float rate_value; //%f
	double simple_interest; //%lf
	//prompt the user
	printf("Enter the Principal Amount:");
	scanf("%d", &principal_amount);
	
	printf("Enter the Time:");
	scanf("%d", &time);
	
	printf("Enter the Rate:");
	scanf("%f", &rate_value);
	
	//calculations
	simple_interest=(principal_amount*time*rate_value)/100;
	
	
	printf("The Simple Interest is = %.2lf", simple_interest);
	
	
	return 0;
}