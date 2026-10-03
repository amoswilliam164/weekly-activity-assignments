/*
Name   : Amos William
Adm No : BCS-03-0076/2026
Course : Computer Science
Unit   : Structured Programming And Algorithms
Program: Do While for GRADING SYSTEM
*/

#include <stdio.h>
int main(int argc, char** argv)
{
	int marks;
	int choice;
	
	printf("    GRADING SYSTEM\n");
	
	do{
		printf("\nEnter the marks:");
		scanf("%d", &marks);
		
		if(marks<0||marks>100){
			printf("Invalid input\n");
			printf("Do you want to continue with grading system(1 for yes,0 for no:");
			scanf("%d", &choice);
			}
		else
		{
			if(marks>=80){
				printf("The grade is A\n");
			}
			else if(marks>=70){
				printf("The grade is B\n");
			}
			else if(marks>60){
				printf("The grade is C\n");
			}
			else if(marks>50){
				printf("The grade is D\n");
			}
			else
			{
				printf("The grade is F\n");
			}choice=1;
		}
		
	}
	while(choice==1);
	
	printf("Grading System Terminated!");

	return 0;
}