/*
Name   : Amos William
Adm No : BCS-03-0076/2026
Course : Computer Science
Unit   : Structured Programming And Algorithms
Program: 1D Array - Weekly Revenue Tracker
*/

#include <stdio.h>

int main(int argc, char** argv)
{
	int i;
	int average_daily_revenue;
	
	int revenue[7];
	
	printf("     Weekly Revenue Tracker    \n\n");
	
	int total_weekely_revenue=0;
	
	for(i=0;i<7;i++)
	{
		printf("Enter revenue for day %d ", i+1);
		scanf("%d", &revenue[i]);	
		total_weekely_revenue=total_weekely_revenue+revenue[i];
		average_daily_revenue=total_weekely_revenue/7;
	}
	
	printf("\nThe tatol weekly revenue is %d", total_weekely_revenue);
	printf("\nThe average daily revenue is %d", average_daily_revenue);
	
		printf("\n");
	
	return 0;
}
