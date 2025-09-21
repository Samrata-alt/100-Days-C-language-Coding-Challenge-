//Write a program to print all factors of a given number.
#include <stdio.h>
int main(){
    int i,t;
    //Input from user
    printf("Enter the number:");
    scanf("%d",&t);
    //Factors of the value
    for(i=1;i<t+1;i++){
        if(t%i==0){
            printf("%d ",i);
        }
    }
    return 0;
}