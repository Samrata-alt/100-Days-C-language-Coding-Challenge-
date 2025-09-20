//Write a program to print numbers from 1 to n.
#include <stdio.h>
int main(){
    int n,i;
    //Input from user
    printf("Enter value for loop:");
    scanf("%d",&n);

    //Loop to print n numbers
    for(i=0;i<n+1;i++){
        printf("%d ",i);
    }
    return 0;
}