//Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>
int main(){
    int a,b,c;          //defining 3 variable to store the numbers entered by the user
    printf("Enter 1st Number:");
    scanf("%d",&a);     //inputting 1st number and stroing it in a
    printf("Enter 2nd Number:");
    scanf("%d",&b);     //inputting 2nd number and storing it in b
    printf("Enter 3rd Number:");
    scanf("%d",&c);     //inputting 3rd ariable andstorring it in c

    if(a>b && a>c){     //if a is the largest number
        printf("largest number is %d",a);
    }
    else if (b>a && b>c){       //if b is the largest nubmer
        printf("largest number is %d",b);
    }
    else if (c>a && c>b){       //if c is the largest number
        printf("largest number is %d",c);
    }
    else{           //if all the 3 numbers are equal
        printf("Invalid input");
    }
    return 0;
}