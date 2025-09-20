//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main(){
    int a,s,m,d,o,x,y;
    char r;
    //Input from user
    printf("Enter the number x:");
    scanf("%d",&x);
    printf("Enter the number y:");
    scanf("%d",&y);
    printf("Enter symbol for calculation(+,-,*,/,'%'):");   //input for symbol user wants to calculate numbers 
    scanf(" %c", &r);

    //Basic calculator using switch case
    switch(r){
        case('+'):{
            a=x+y;
            printf("Sum:%d",a);
            break;
        }
        case('-'):{
            s=x-y;
            printf("Subtraction:%d",s);
            break;
        }
        case('*'):{
            m=x*y;
            printf("Multiplication:%d",m);
            break;
        }
        case('/'):{
            if(y!=0){
                d=x/y;
                printf("Division:%d",d);
            }
            else{
                printf("Denominator can't be zero!\n");
            }
            break;
        }
        case('%'):{
            if(y!=0){
                o=x%y;
                printf("Modulus:%d",o);
            }
            else{
                printf("Error modulus by zero!\n");
            }
            break;
        }
        default:{
            printf("ERROR OCCOURED PLEASE TRY AGAIN!");
            break;
        }
    }
    return 0;

}

