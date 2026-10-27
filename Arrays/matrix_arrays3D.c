/*
Name   : Amos William
Adm No : BCS-03-0076/2026
Course : Computer Science
Unit   : Structured Programming And Algorithms
Program: 3D Arrays
*/

#include <stdio.h>

int main()
{
	int i,j,k;
	int marks[2][2][3]={
	{{1,2,3},{4,5,6}}, 
	{{10,20,30},{40,50,60}}
	};
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\n");
			for(k=0;k<3;k++){
				printf("%d ", marks[i][j][k]);
			}
		
		} 
		printf("\n");
	}
			return 0;
}