/*
Name   : Amos William
Adm No : BCS-02-0076/2026
Course : Computer Science
Unit   : Structured Programming And Algorithms
Program: Mobile Data Bundle Purchase
*/

#include <stdio.h>
int main()
{
	int choice;
	printf("Select your data bundle option:\n");
	printf("1. 100MB @ 50  KES\n");
	printf("2. 500MB @ 200 KES\n");
	printf("3. 1GB   @ 350 KES\n");
	printf("4. 2GB   @ 600 KES\n");
	
	printf("\nEnter your choice (1-4):");
	scanf("%d", &choice);
	
	switch(choice)
	{
	case 1:
		printf("You selected 100MB which costs = 50 KES ");
		break;  
	case 2:
		printf("You selected 500MB which costs = 200 KES");
		break;
	case 3:
		printf("You selected 1GB which costs = 350 KES ");
		break;
	case 4:
		printf("You selected 2GB which costs = 600 KES ");
		break;
	default:
		printf("Invalid choice");
		
	}

	
	return 0;
}