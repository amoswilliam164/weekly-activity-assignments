/*
Name   : Amos William
Adm No : BCS-03-0076/2026
Course : Computer Science
Unit   : Structured Programming And Algorithms
Program: 1D Arrays
*/

#include <stdio.h>

int main(int argc, char** argv)
{
	//declare and intialize
	int marks[5]={10,20,30,40,50};
	int i;
	

	/*
	printf("%d", marks[0]);
	printf("%d", marks[1]);
	printf("%d", marks[2]);
	printf("%d", marks[3]);
	printf("%d", marks[4]);
	*/
	int sum=0;
	//for(stsrt;stop;step
	for(i=4;i>=0;i--)
	{
		printf("%d\n", marks[i]);
		sum=sum+marks[i];
	}
	printf("\nThe sum is %d\n", sum);
	return 0;
}