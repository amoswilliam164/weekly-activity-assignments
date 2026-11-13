/*
Name   : Amos William
Adm No : BCS-03-0076/2026
Course : Computer Science
Unit   : Structured Programming And Algorithms
Program: Basic File Handling - Employee Record
*/

#include<stdio.h>
#include<stdlib.h>
 
void WriteEmployee(void);
void ReadEmployee(void);
void AppendEmployee(void);

int main () {
    WriteEmployee();
    ReadEmployee();
    AppendEmployee();


     return 0;

}

void WriteEmployee(void) {
    FILE *ft;
    char name[70];
    int identification_number;
    char department[100];

    ft = fopen("C:\\Users\\USER\\Documents\\C Files\\employees.txt", "w");

    if(ft == NULL){
        printf("Error opening the file\n");
        exit(1);

    }
    printf("Enter the Employees full  name:\n");
    fgets(name, sizeof(name), stdin); //scanf("%s^[\n]", sentence);
    fprintf(ft, "Name: %s\n", name);

    printf("Enter the Employee's identification  number:\n");
    scanf("%d", &identification_number);
    getchar(); // Consume the newline before reading the course.
    fprintf(ft, "identification_number: %d\n", identification_number);

    printf("Enter the Emloyees department :\n");
    fgets(department, sizeof(department), stdin); //scanf("%s^[\n]", sentence);
    fprintf(ft, "department : %s\n", department);
   
    
    printf("Employee  details  created in file\n");
    fclose(ft);
}


void ReadEmployee() {
    FILE *ft;
    char name[70];
    int identification_number;
    char department[100];
    int ch;

    ft = fopen("C:\\Users\\USER\\Documents\\C Files\\employees.txt", "r");

    if(ft == NULL){
        printf("Error opening the file\n");
        exit(1);
    }

    while ((ch = getc(ft)) != EOF) {
        putchar(ch);
    }
    fclose(ft);

}


void AppendEmployee() {
    FILE *ft;
    char name[70];
    int identification_number;
    char  department[100];
    

    ft = fopen("C:\\Users\\USER\\Documents\\C Files\\employees.txt", "a");

    if(ft == NULL){
        printf("Error opening the file\n");
        exit(1);

    }
    printf("Enter new   Employee name:\n");
    fgets(name, sizeof(name), stdin); //scanf("%s^[\n]", sentence);
    fprintf(ft, "Name: %s\n", name);

    printf("Enter new Employee identification number:\n");
    scanf("%d", &identification_number);
    getchar();
    fprintf(ft, "identification_number: %d\n", identification_number);

    printf("Enter new Employee's department:\n");
    fgets(department, sizeof(department), stdin); //scanf("%s^[\n]", sentence);
    fprintf(ft, "department: %s\n", department);

    

    printf("New employee details appended in file\n");
    fclose(ft);
}