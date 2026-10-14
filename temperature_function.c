/*
Name   : Amos William
Adm No : BCS-03-0076/2026
Course : Computer Science
Unit   : Structured Programming And Algorithms
Program: To take temperature
*/

#include <stdio.h>

float celcius(float fahrenheit){
    return (fahrenheit - 32) * 5 / 9;
}
float fahrenheit(float celcius){
    return (celcius * 9 / 5) + 32;
}

int main(){
    float fahrenheit_value, celsius_value;

    printf("The temperature in Fahrenheit is: \n");
    scanf("%f", &fahrenheit_value);

    printf("The temperature in Celcius is: \n");
    scanf("%f", &celsius_value);


    celsius_value = celcius(fahrenheit_value);
    printf("The temperature in Celsius = %.2f\n", celsius_value);
    printf("The temperature in Fahrenheit = %.2f\n", fahrenheit(celsius_value));

    return 0;
}