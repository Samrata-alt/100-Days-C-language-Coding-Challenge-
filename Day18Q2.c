//Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>
int main(){
    int a,b;
    int temp;
    //Input values from user
    printf("Enter two values:");
    scanf("%d %d",&a,&b);
    //HCF of two numbers
    while (b!=0){
        temp=b;        // Save current value of b
        b=a%b;         // Update b to remainder of a divided by b
        a=temp;         // Assign old b to a
    }
    printf("HCF:%d",temp);
    return 0;
}