//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
int main(){
    int n,i,s,a;
    //Input from user
    printf("Enter value for loop:");
    scanf("%d",&n);
    a=n*2;     //To extend the range for loop

    //Loop to print sum of n odd numbers
    for(i=1;i<a;i++){
        if(i%2!=0){
            s=s+i;
        }
    }
    printf("Sum of %d odd numbers: %d",n,s);
    return 0;
}