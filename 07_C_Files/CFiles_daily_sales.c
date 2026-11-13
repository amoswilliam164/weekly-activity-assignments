/*
Name   : Amos William
Adm No : BCS-03-0076/2026
Course : Computer Science
Unit   : Structured Programming And Algorithms
Program: C Files - Daily Sale
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE*fptr;
	float sales;
	float total_sales=0;
	
	//open the file in read mode
	fptr=fopen("C:\\Users\\USER\\Documents\\C Files\\borrowed_books.txt","r"  );
	
	if(fptr==NULL)
	{
		printf("Error opening the file.\n");
		exit(1);
	}
	
	//read all transactions 
	while(fscanf(fptr,"%f", &sales)==1)
	{
		total_sales=total_sales+sales;
	}
	
	//display sales
	printf("Total sales for the day:Ksh %.2f\n", total_sales);
	
	 //close the file
	 fclose(fptr);
	 
	 printf("File closed successfully.\n");
	 
	
	
	return 0;
}