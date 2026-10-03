/*
Name   : Amos William
Adm No : BCS-02-0076/2026
Course : Computer Science
Unit   : Structured Programming And Algorithms
Program: Exam Eligibility
*/

#include <stdio.h>
int main()
{
	int attendance, avarage_marks;//%d
	
	printf("Enter the attendance:");
	scanf("%d", &attendance);
	
	printf("Enter the avarage marks:");
	scanf("%d", &avarage_marks);
	
	if(attendance>=75&&avarage_marks>=40){
		
		printf("\nEligible for the final exams.");
	}
	else{
		printf("Not eligible.");
	}
	
	return 0;
}