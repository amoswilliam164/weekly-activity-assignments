/*
Name   : Amos William
Adm No : BCS-02-0076/2026
Course : Computer Science
Unit   : Structured Programming And Algorithms
Program: Water Bill Calculations
*/

#include <stdio.h>
int main()
{
	float no_of_water_units, total_amount;//%f
	
	//Declaration and prompting
	printf("Enter the No. of water Units:");
	scanf("%f", &no_of_water_units);	
	
	if(no_of_water_units<=30){
		total_amount=no_of_water_units*20;
		printf("\nThe total water bill in KES is = %.2f", total_amount);
	}
	else if(no_of_water_units>=31&&no_of_water_units<60){
		total_amount=no_of_water_units*25;
		printf("\nThe total water bill in KES is = %.2f", total_amount);
		
	}
	else{
		total_amount=no_of_water_units*30;
		 printf("\nThe total water bill in KES is = %.2f", total_amount);
	}
	
	
	return 0;
}