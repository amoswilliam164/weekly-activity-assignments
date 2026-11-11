/*
Name   : Amos William
Adm Noa : BCS-03-0076/2026
Course : Computer Science
Unit   : Structured Programming And Algorithms
Program: CStructure
*/

#include <stdio.h>
#include <string.h>

struct patient
{
	char name[30];
	int ID;
	int age;
	float temperature;
	int days_admitted;
};

int main()
{   
    int accommadation_cost=2500;
	int total_accommodation;
	
	struct patient patient1;
	
	printf("Enter the name:");
	fgets(patient1.name,sizeof(patient1.name), stdin);
	
	printf("Enter the ID:");
	scanf("%d",&patient1.ID);
	
	printf("Enter the age:");
	scanf("%d",&patient1.age);
	
	printf("Enter the temperature:");
	scanf("%f",&patient1.temperature);
	
	printf("Enter the days admitted:");
	scanf("%d",&patient1.days_admitted);
	
	printf("\nName:%s", patient1.name);
	printf("ID:%d\n", patient1.ID);
	printf("Age:%d\n", patient1.age);
	printf("Temperature:%.2f\n", patient1.temperature);
	printf("Days Admitted:%d\n", patient1.days_admitted);
	
    total_accommodation=accommadation_cost*patient1.days_admitted;	
	printf("Total Accommodation cost:%d\n",total_accommodation);
	
	
	return 0;
}