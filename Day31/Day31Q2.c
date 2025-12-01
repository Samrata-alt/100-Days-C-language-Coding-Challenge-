//Reverse an array without taking extra space.

#include <stdio.h>
int main(){
    int i,s,a[50];
    //Input value for loop from user
    printf("Enter value for loop range:");
    scanf("%d",&s);
    //Takes value from user for array
    for(i=0;i<s;i++){
        printf("Enter a element:");
        scanf("%d",&a[i]);
    }
    //Prints the array elements in reverse 
    for(i=s-1;i>=0;i--){
            printf("%d ",a[i]);
    }
}