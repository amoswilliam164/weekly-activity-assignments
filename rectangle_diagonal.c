/*
Name   : Amos William
Adm No : BCS-03-0076/2026
Course : Computer Science
Unit   : Structured Programming And Algorithms
Program: Diagonal length
*/

#include <stdio.h>
#include <math.h>


int main() 
{
    double length, width, diagonal;

    printf("Enter length: ");
    scanf("%lf", &length);

    printf("Enter width: ");
    scanf("%lf", &width);


    diagonal = sqrt(pow(length, 2) + pow(width, 2));


    printf("\nLength: %.2f\n", length);
    printf("Width: %.2f\n", width);
    printf("Diagonal: %.2f\n", diagonal);

    return 0;
}