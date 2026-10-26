/*
Name   : Amos William
Adm No : BCS-03-0076/2026
Course : Computer Science
Unit   : Structured Programming And Algorithms
Program: 3D Array - HOTEL OCCUPANCY
*/

#include <stdio.h>

int main(int argc, char** argv)
{
	int chain[3][5][10];
	int Branch,Floor,Room;
	
	printf("\n     HOTEL BRANCHES OCCUPANCY \n");
	
	for(Branch=0;Branch<3;Branch++)
	{
		printf("\n  BRANCH %d", Branch+1);
		
		for(Floor=0;Floor<5;Floor++)
		{
			printf("\nFloor %d\n", Floor+1);
			
			for(Room=0;Room<10;Room++)
			{
              printf("Enter the room %d occupancy(1=occupied,0=vacant)",Room+1);
              scanf("%d", &chain[Branch][Floor][Room]);
			}
			
		}
	}
	
	printf("\n     ROOMS RESULTS\n");
	
	for(Branch=0;Branch<3;Branch++)
	{
		printf("\n  BRANCH %d",Branch+1);
		
		for(Floor=0;Floor<5;Floor++)
		{
			int occupied=0;
			int vacant=0;
			
			for(Room=0;Room<10;Room++)
			{
				if(chain[Branch][Floor][Room]==1)
				{
					occupied++;
				}
				else
				{
					vacant++;
				}
			}
			
            printf("\nFloor %d", Floor+1);
            printf("\nOccupied rooms %d", occupied);
            printf("\nVacant rooms %d", vacant);
		
		    printf("\n");
		}	
		
		    	
	}
	
	return 0;
	
}
