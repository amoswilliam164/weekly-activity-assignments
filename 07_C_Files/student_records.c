/*
Name   : Amos William
Adm No : BCS-03-0076/2026
Course : Computer Science
Unit   : Structured Programming And Algorithms
Program: Basic File Handling - Student Record
*/


#include<stdio.h>
#include<stdlib.h>


void SaveStudent(void);
void DisplayStudent(void);
void AddStudent(void);

int main() {
    SaveStudent();
    DisplayStudent();
    AddStudent();

    return 0;

}
void SaveStudent(void) {
    FILE *ft;
    char name[70];
    int admission_number;
    char course[100];

    ft = fopen("C:\\Users\\USER\\Documents\\C Files\\student.txt", "w");

    if(ft == NULL){
        printf("Error opening the file\n");
        exit(1);

    }
    printf("Enter the students Name:\n");
    fgets(name, sizeof(name), stdin); //scanf("%s^[\n]", sentence);
    fprintf(ft, "Name: %s\n", name);

    printf("Enter the students admission number:\n");
    scanf("%d", &admission_number);
    getchar(); // Consume the newline before reading the course.
    fprintf(ft, "Admission Number: %d\n", admission_number);

    printf("Enter the students course:\n");
    fgets(course, sizeof(course), stdin); //scanf("%s^[\n]", sentence);
    fprintf(ft, "Course: %s\n", course);
   
   
    printf("Student details  created in file\n");
    fclose(ft);
}


void DisplayStudent() {
    FILE *ft;
    char name[70];
    int admission_number;
    char course[100];
    int ch;

    ft = fopen("C:\\Users\\USER\\Documents\\C Files\\student.txt", "r");

    if(ft == NULL){
        printf("Error opening the file\n");
        exit(1);
    }

    while ((ch = getc(ft)) != EOF) {
        putchar(ch);
    }
    fclose(ft);

}


void AddStudent() {
    FILE *ft;
    char name[70];
    int admission_number;
    char course[100];
    

    ft = fopen("C:\\Users\\USER\\Documents\\C Files\\student.txt", "a");

    if(ft == NULL){
        printf("Error opening the file\n");
        exit(1);

    }
    printf("Enter new   students Name:\n");
    fgets(name, sizeof(name), stdin); //scanf("%s^[\n]", sentence);
    fprintf(ft, "Name: %s\n", name);

    printf("Enter new student's admission number:\n");
    scanf("%d", &admission_number);
    getchar();
    fprintf(ft, "Admission Number: %d\n", admission_number);

    printf("Enter new student course:\n");
    fgets(course, sizeof(course), stdin); //scanf("%s^[\n]", sentence);
    fprintf(ft, "Course: %s\n", course);

    printf("paragraph appended created in file");
    fclose(ft);

}