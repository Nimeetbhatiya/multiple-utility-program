// 3 Triangle Angle Finder
// Write a program to find the third angle of a right triangle when two other angles are given.
#include<stdio.h>
int main(){
    int first,second,third;
    printf("enter the value of first angle : ");
    scanf("%d",&first);
    printf("enter the value of second angle : ");
    scanf("%d",&second);
    third=(180-(first+second));
    printf("third angle is %d",third);
    return 0;
}