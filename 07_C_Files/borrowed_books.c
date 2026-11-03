/*
Name   : Amos William
Adm No : BCS-03-0076/2026
Course : Computer Science
Unit   : Structured Programming And Algorithms
Program: C Files - Borrowed Books
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE*fptr;
	char title[100];
	
	fptr=fopen("C:\\Users\\USER\\Documents\\C Files\\borrowed_books.txt","a");
	
	if(fptr==NULL)
	{
		printf("Error opening the file.\n");
		
		return 1;
	}
	
	printf("Enter the book title:");
	fgets(title, sizeof(title), stdin);
	
	fprintf(fptr, "%s", title);
	
	fclose(fptr);
	
	printf("Book title stored successfully.\n");
	
	return 0;
}