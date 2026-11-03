/*
Name   : Amos William
Adm No : BCS-03-0076/2026
Course : Computer Science
Unit   : Structured Programming And Algorithms
Program: C Files - Students Results
*/


#include<stdio.h>
#include<stdlib.h>

 int main() {
   char name[100];
   char registration_number[50];
     
    FILE*fptr;
    fptr = fopen("C:\\Users\\USER\\Documents\\C Files\\student_info.txt","w");
     if (fptr == NULL)
	 {
        printf("Error in oppening the file");
        exit(1);

     }
   printf("Enter the student name:");
    fgets(&name[0], sizeof(name), stdin);

     printf("Enter the student registration number:");
     fgets(registration_number, sizeof(registration_number), stdin);

   fprintf(fptr,"The student name is: %s\nThe students registration number is: %s\n", name, registration_number);
     fclose(fptr);

     printf("Student details created successfully \n");

     return 0;
     


 }