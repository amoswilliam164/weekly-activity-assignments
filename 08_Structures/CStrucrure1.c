/*
Name   : Amos William
Adm No : BCS-03-0076/2026
Course : Computer Science
Unit   : Structured Programming And Algorithms
Program: CStructure
*/

#include <stdio.h>
#include <string.h>

struct student
{
	char name[30];
	int age;
	//char adm_no[50];
	char email[30];
	float height;
	char grade;
};

int main()
{
	struct student student1;
	
	/*
	strcpy(student1.name, "Amos");
	student1.age=22;
	strcpy(student1.email, "amos@gmail.com");
	student1.height=182.2;
	student1.grade='A';
	*/

 printf("Enter your name:");
 //scanf("%s",&student1.name);
 fgets(student1.name,sizeof(student1.name),stdin);

 printf("Enter your age:");
 scanf("%d",&student1.age);

 printf("Enter your Email:");
 scanf("%s",&student1.email);

 printf("Enter your height:");
 scanf("%f",&student1.height);
 
 printf("Enter your grade:");
 scanf(" %c",&student1.grade);
	
	
	printf("\nName:%s", student1.name);
	printf("Age:%d \n", student1.age );
	printf("Email:%s \n", student1.email);
	printf("Height:%.2f \n", student1.height);
	printf("Grade:%c \n", student1.grade);
	
	return 0;
}
