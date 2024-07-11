// Q.1 Temperature Converter
// Develop a program that converts temperature from degrees Celsius to Fahrenheit using the
// formula: °F = (9/5 × °C) + 32
#include<stdio.h>
int main(){
    float c;
    printf("enter the value of celuis : ");
    scanf("%f",&c);
    float F = ((9.0/5) * (c)) + 32;
    printf("%f", F);
    return 0;
}