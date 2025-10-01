//Rotate an array to the right by k positions.

#include <stdio.h>
int main(){
    int i,s,k,a[50];
    //Input value for loop from user
    printf("Enter value for loop range:");
    scanf("%d",&s);
    //Takes value from user for array
    for(i=0;i<s;i++){
        printf("Enter a element:");
        scanf("%d",&a[i]);
    }
    // Input number of positions to rotate
    printf("Enter number of positions to rotate right: ");
    scanf("%d", &k);
    //Reverse the array by k position in right
    for(i=0;i<k;i++){
        int l=a[s-1];         //Save the last element
        for(int j=s-1;j>0;j--){
            a[j]=a[j-1];         //Shift each element to the right
        }
            a[0]=l;                 //Place the last element at the front
    }
    // Print updated array
    printf("Updated sorted array:\n");
    for(i=0;i<s;i++){
        printf("%d ",a[i]);
    }
    return 0;
}