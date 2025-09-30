//Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>
int main(){
    int i,a,n;
    //Input from user
    printf("Enter the value:");
    scanf("%d",&a);
    //Print prime no. from 1 to a
    for(i=2;i<=a;i++){
        n=1;            //flag to check prime no.
        for(int j=2;j<=i-1;j++){
            if(i%j==0){
                n=0;       //if divisible by any no. 
            }
        }
        if(n==1){           //prints no. if it is not divisible by any no.
            printf("%d ",i);
        }
    }
    return 0;
}