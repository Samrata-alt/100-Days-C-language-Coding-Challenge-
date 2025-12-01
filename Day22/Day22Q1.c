//Write a program to check if a number is a strong number.

#include <stdio.h>
int main(){
    int i,t,r,s=0,a;
    //Input from user
    printf("Enter the number:");
    scanf("%d",&t);
    a=t;             //Store original value of t
    //Check wheater a number is strong no. or not
    while(t!=0){
        r=t%10;      //To get the last digit of number

        //Factorial of a number
        int fact=1;
        for(i=1;i<r+1;i++){
            fact=fact*i;
        }
        s=s+fact;     //Adds the factorials
        t=t/10;      //To remove the last digit     
    }
    if(a==s){
        printf("Strong number");
    }
    else{
        printf("Not strong number");
    }
    return 0;
}
