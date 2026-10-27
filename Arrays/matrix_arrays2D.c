/*
Name   : Amos William
Adm No : BCS-03-0076/2026
Course : Computer Science
Unit   : Structured Programming And Algorithms
Program: 2D Arrays
*/

#include <stdio.h>

int main(int argc, char** argv)
{
	int i,j;
	int marks[2][3]={
	{10,20,30},
	{40,50,60}
};
	
	//10,20,30,40,50,60,
	for(i=0;i<2;i++)
	{
		printf("\n");
	for(j=0;j<3;j++)
	{
		printf("%d  ", marks[i][j]);
		
	}
	
	}	
		printf("\n");	
	return 0;
}