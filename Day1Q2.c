//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>
int main(){
    int a,b,sum,diff,prod,quot;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    sum=a+b;
    diff=a-b;
    prod=a*b;
    quot=a/b;
    printf("Sum=%d\n",sum);
    printf("Diff=%d\n",diff);
    printf("Product=%d\n",prod);
    printf("Quotient=%d\n",quot);
    return 0;

}