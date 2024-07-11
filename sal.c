// Q.2 Gross Salary Calculator
// Create a program that calculates the gross salary by adding percentages of HRA, DA, and TA to
// the base salary as chosen by the user.
#include<stdio.h>
int main(){
    int s;
    printf("enter the value of salary : ");
    scanf("%d",&s);
    float hra=((s*10)/100);
    printf("hra of %d is %f\n",s,hra);
    float da=((s*5)/100);
    printf("da of %d is %f\n",s,da);
    float ta=((s*8)/100);
    printf("ta of %d is %f\n",s,ta);
    float total=hra+da+ta+s;
    printf("Gross Salary is Rs %f",total);
    return 0;
}