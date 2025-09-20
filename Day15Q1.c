//Write a program to calculate the factorial of a number.
#include <stdio.h>
int main(){
    int i,a,fact=1;
    //Input values from user
    printf("Enter the number:");
    scanf("%d",&a);
     
    //Factorial of a number
    for(i=1;i<a+1;i++){
        fact=fact*i;
    }
    printf("Factorial:%d",fact);
    return 0;
}
