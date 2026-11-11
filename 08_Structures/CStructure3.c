/*
Name   : Amos William
Adm Noa : BCS-03-0076/2026
Course : Computer Science
Unit   : Structured Programming And Algorithms
Program: CStructure
*/

#include <stdio.h>
#include <string.h>

struct product
{
	char name[30];
	int code;
	float unit_price;
	int quantity_stock;
};

int main()
{
	struct product product1;
	float total_value;
	
	printf("Enter the name:");
	fgets(product1.name,sizeof(product1.name),stdin);
	
	printf("Enter the Code:");
	scanf("%d",& product1.code);
	
	printf("Enter Unit Price:");
	scanf("%f",&product1.unit_price);
	
	printf("Enter Quantity in Stocks:");
	scanf("%d",&product1.quantity_stock);
	
	total_value= product1.unit_price * product1.quantity_stock;
	
	printf("Total value is: %.2f\n", total_value);
	
		
	return 0;
}