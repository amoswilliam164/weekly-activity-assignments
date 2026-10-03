/*
Name: Amos William
Adm No: BCS-03-0076/2026
Course: Computer Science
*/

#include <stdio.h>
int main(){
	
	int BookID, DueDate, ReturnDate, DaysOverdue, FineRate, FineAmount; //%d
	
	printf("Enter Book ID: ");
	scanf("%d", &BookID);
	
	printf("Enter Due Date: ");
	scanf("%d", &DueDate);
	
	printf("Enter Return Date: ");
	scanf("%d", &ReturnDate);
	
	//calculation
	DaysOverdue = ReturnDate - DueDate;
	
	if(DaysOverdue <=7){
	FineRate=20;
	FineAmount=DaysOverdue*FineRate;
	
	}
	else if(DaysOverdue >= 8 &&DaysOverdue <= 14){
		FineRate=50;
		FineAmount=DaysOverdue*FineRate;
		
	}
	else{FineRate=100;
	FineAmount=DaysOverdue*FineRate;
	}
	
	printf("     LIBRARY FINE CALCULATION");
	printf("\nBook ID = %d\n", BookID);
	printf("Due Date= %d\n", DueDate);
	printf("Return Date= %d\n", ReturnDate);
	printf("Days Ovedue = %d\n", DaysOverdue);
	printf("Fine Rate = %d\n", FineRate);
	printf("Fine Amount = %d", FineAmount);
	
	
	return 0;
}