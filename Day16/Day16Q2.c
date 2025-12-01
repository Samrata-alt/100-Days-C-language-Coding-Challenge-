//Write a program to check if a number is a palindrome.
#include <stdio.h>
int main(){
    int i,t,rem,rev=0,a;
    //Input from user
    printf("Enter the number:");
    scanf("%d",&t);
    a=t;
    //Reverse of a number
    while(t!=0){
        rem=t%10;         //To get the last digit of t
        rev=rev*10+rem;   //Add last digit to rev
        t=t/10;           //To remove the last digit of t
    }
    //Checks wheater the number is palindrome or not
    if(a==rev){
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }    
    return 0;
}