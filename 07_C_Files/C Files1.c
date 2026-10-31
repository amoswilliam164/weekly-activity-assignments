/*
Name   : Amos William
Adm No : BCS-03-0076/2026
Course : Computer Science
Unit   : Structured Programming And Algorithms
Program: C Files
*/

#include <stdio.h>//scanf(), printf(),fopen(),fprintf(),
#include <stdlib.h>//exit()

int main()
{
	int num;
	//ope file
	FILE *fptr;//address for filr storing
	
	fptr=fopen("C:\\Users\\USER\\Documents\\C Files\\sample.bin","wb"); 
	
	if(fptr==NULL)
	{
		printf("Error opening the file \n");
		exit(1);
	}
	
	
	printf("Enter a random number ");
	scanf("%d", &num);
	
	//write a file
	fprintf(fptr, "%d", num);
	
	//close
	fclose(fptr);
	
	printf("\nFile Written Succesfully\n");
	
	
	return 0;
}
