#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE*fptr;
	char name[100];
	char reg_number[30];
	
	// open a file
	fptr=fopen("C:\\Users\\USER\\Documents\\C Files\\student.txt","w");
	
	if(fptr==NULL)
	{
		printf("Error opening a file\n");
		exit(1);
	}
	//Enter students details
	printf("Enter students Full Name :");
	fgets(name, sizeof(name), stdin);
	
	printf("Enter Registration number:");
	fgets(reg_number,sizeof(reg_number), stdin);
	
	//store the details
	fprintf(fptr, "Student name: %s", name);
	fprintf(fptr,"Registration Number:%s", reg_number);
	
	//close the file
	fclose(fptr);
	
	printf("Students details saved successfully");
	printf("\n");
	
	
	
	return 0;
}