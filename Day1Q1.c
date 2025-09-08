//Q1: Write a program to input two numbers and display their sum.

#include <stdio.h>
int main(){
    int c,a,b;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("Enter the number:");
    scanf("%d",&b);
    c=a+b;
    printf("The sum is: %d",c);

    return 0;
}