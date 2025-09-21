//Write a program to find the LCM of two numbers.

#include <stdio.h>
int main(){
    int a,b,x,y;
    int temp,LCM;
    //Input values from user
    printf("Enter two values:");
    scanf("%d %d",&a,&b);
    x=a,y=b;
    //HCF of two numbers
    while (b!=0){
        temp=b;        // Save current value of b
        b=a%b;         // Update b to remainder of a divided by b
        a=temp;         // Assign old b to a
    }
    LCM=(x*y)/temp;
    printf("LCM:%d",LCM);
    return 0;
}