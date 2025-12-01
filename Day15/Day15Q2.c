//Write a program to reverse a given number.
#include <stdio.h>
int main(){
    int i,t,rem,rev=0;
    //Input from user
    printf("Enter the number:");
    scanf("%d",&t);
    //Reverse of a number
    while(t!=0){
        rem=t%10;         //To get the last digit of t
        rev=rev*10+rem;   //Add last digit to rev
        t=t/10;           //To remove the last digit of t
    }
    printf("Reverse:%d",rev);
    return 0;
}