//Write a program to check if a number is prime.
#include <stdio.h>
int main(){
    int a,s,i;
    //Input values from users
    printf("Enter the value:");
    scanf("%d",&a);
    s=0;
    //Check for value is prime or not
    for(i=2;i<=a/2;i++){          //It will iterate till a/2
        if(a%i==0){             //If it gets divisible by i it is not prime
            s++;
            break;
        }
    }
    if(s==0){                    //if s remains 0 after loop it is prime
        printf("It is prime");
    }
    else{
        printf("It is not prime");
    }
    return 0;
}