//Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
int main(){
    int i,t,r,p=0,d=1;
    //Input from user
    printf("Enter a binary number(using 1s and 0s):");
    scanf("%d", &t);
    
    // Compute 1's complement
    while(t!=0){
        r=t%10;  // Get last digit
        // Flip the bit: 0 becomes 1, 1 becomes 0
        r=(r==0)?printf("1"):printf("0");
        t=t/10;
    }
    return 0;
}