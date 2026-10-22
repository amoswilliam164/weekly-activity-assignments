/*
Name   : Amos William
Adm No : BCS-03-0076/2026
Course : Computer Science
Unit   : Structured Programming And Algorithms
Program: Weekly Revenue Tracker
*/

#include <stdio.h>

int main(int argc, char** argv)
{
	int i;
	
	int revenue[7]={10000,12000,11000,9600,17000,21000,260000};
	
	printf("       Weekly Revenue Tracker    \n\n");
	
	int total_weekely_revenue=0;
	
	for(i=0;i<7;i++)
	{
		printf("%d ", revenue[i]);	
		total_weekely_revenue=total_weekely_revenue+revenue[i];
	}
	
	
	printf("\nThe tatol weekly revenue is %d", total_weekely_revenue);
	
		printf("\n");
	
	return 0;
}