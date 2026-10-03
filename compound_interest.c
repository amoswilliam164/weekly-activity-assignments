/*
Name   : Amos William
Adm No : BCS-02-0076/2026
Course : Computer Science
Program: Compound Interest=CI
CI = Amount-Principal
Amount = P(1+Rate/100)^T
*/

#include <stdio.h>
#include <math.h>
int main()
{
	//Declaration
	int principal_amount;//%d
	float rate_value, time;//%f
	double compound_interest, amount;//%lf
	
	printf("Enter the Principal Amount:");
	scanf("%d", &principal_amount);
	
	printf("Enter the Time:");
	scanf("%f", &time);
	
	printf("Enter the Rate Value:");
	scanf("%f", &rate_value);
	
	//Calculations Formula 
	amount = principal_amount*pow(1+rate_value*0.01,time);
	compound_interest = amount-principal_amount;
	
	printf("The Amount is = %.2lf\n", amount);	
	printf("The Compound Interest is = %.2lf", compound_interest);
	
	
	return 0;
}