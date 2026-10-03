/*
Name   : Amos William
Adm No : BCS-03-0076/2026
Course : Computer Science
Unit   : Structured Programming And Algorithms
Program: Students Grading System
*/

#include <stdio.h>
int main(){
	
	float marks;//%f
	char grade;//%c
	int choice;//%d

	
	/* Marks   Grade
       80-100  A
       70-79   B
       60-69   C
	   50-59   D
	   0-49    F
	 */
	printf("     GRADING SYSTEM\n\n");
	do{
		printf("\nEnter the marks:");
		scanf("%f", &marks);
		
		if(marks>=80&&marks<100){
		printf("The grade is: A\n");
		}
		else if(marks>=70&&marks<80){
		printf("The grade is: B\n");
		}
		else if(marks>=60&&marks<70){
		printf("The grade is: C\n");
		}
		else if(marks>=50&&marks<60){
		printf("The grade is: D\n");
		}
		else if(marks<50)
		printf("The grade is: F\n");
	
		}while(marks>0&&marks<=100);
	
	printf("Invalid input!\n\n");
	printf("Do you want to continue with the grading system?");
	scanf("%f", &choice);
	
	
	
	   	return 0;
}