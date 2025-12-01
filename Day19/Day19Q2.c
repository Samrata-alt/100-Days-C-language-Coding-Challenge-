//Write a program to find the sum of digits of a number.

#include <stdio.h>
int main(){
    int i,t,r,s=0;
    //Input from user
    printf("Enter the number:");
    scanf("%d",&t);
    //Sum of digits of a number
    while(t!=0){
        r=t%10;      //To get the last digit of number   
        s=s+r;       //Adds the digits
        t=t/10;      //To remove the last digit     
    }
    printf("SUM:%d",s);
    return 0;
}
