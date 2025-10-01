//Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>
int main(){
    int i,b,c,a[50][50];
    //Input value for row & column from user
    printf("Enter row value:");
    scanf("%d",&b);
    printf("Enter column value:");
    scanf("%d",&c);
    //Takes value from user for matrix
    for(i=0;i<b;i++){
        for(int j=0;j<c;j++){
            printf("Enter the element:");
            scanf("%d", &a[i][j]);
        }
    }
    //Sums all the elements of matrix
    int h[50];
    for(i=0;i<b;i++){
        int s=0;
        for(int j=0;j<c;j++){
            s+=a[i][j];
        }
        h[i]=s;
    }
    //Prints the elements of array
    for(i=0;i<b;i++){
            printf("%d ",h[i]);
    }
    return 0;
}