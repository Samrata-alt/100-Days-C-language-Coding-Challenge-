//Read and print elements of a one-dimensional array.

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
    //Prints the elements of array
    for(i=0;i<s;i++){
            printf("%d ",a[i]);
    }
    return 0;
}