//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main(){
    int n,i,p=1;
    //Input from user
    printf("Enter value for loop:");
    scanf("%d",&n);

    //Loop to print product of 1 to n even numbers
    for(i=1;i<n+1;i++){
        if(i%2==0){
            p=p*i;
        }
    }printf("Product:%d",p);
    return 0;
}