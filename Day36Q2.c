//Find the sum of all elements in a matrix

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
    int s=0;
    for(i=0;i<b;i++){
        for(int j=0;j<c;j++){
            s+=a[i][j];
        }
    }
    printf("SUM:%d",s);
    return 0;
}