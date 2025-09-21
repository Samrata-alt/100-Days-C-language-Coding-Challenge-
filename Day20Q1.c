//Write a program to find the product of odd digits of a number.

#include <stdio.h>
int main(){
    int i,t,r,p=1;
    //Input from user
    printf("Enter the number:");
    scanf("%d",&t);

    //Product of odd digits of a number
    while(t!=0){
        r=t%10;      //To get the last digit of number
        if(r%2!=0){   //check if r is odd or not
            p=p*r;       //Multiply the digits
        }   
        t=t/10;      //To remove the last digit     
    }
    printf("Product:%d",p);
    return 0;
}