//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>

int main(){
    int t,a,count=0,arm=0,rem;
    //Input from user
    printf("Enter the number:");
    scanf("%d",&t);
    a=t;                   //Preserve original number
    //Counts the number of digits
    int b=t;
    while(b!=0){  
        b=b/10;           
        count++;          
    }
    //Calculation of Armstrong number
    int ch=t;
    while(ch>0){
        rem=ch%10;              //To get the last digit from ch
        arm=arm+pow(rem,count);   //Adds rem power count to calculate armstrong
        ch=ch/10;                //To remove last digit
    }
    //Checks if value is armstrong or not
    if(a==arm){
        printf("Armstrong");
    }
    else{
        printf("Not armstrong");
    }
    return 0;
}