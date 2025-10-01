//Check if a matrix is symmetric.

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
    int d[50][50],count=0;
    //Entering every element of d matrix 0
    for(i=0;i<b;i++){
        for(int j=0;j<c;j++){
            d[i][j]=0;
        }
    }
    //Transpose of matrix a
    for(i=0;i<c;i++){
            for(int j=0;j<b;j++){
                d[i][j]=a[j][i];
            }
        }
    //Checking for Symmetric matrix
    if(b==c){
        for(i=0;i<c;i++){
            for(int j=0;j<b;j++){
                if(d[i][j]==a[j][i]){
                    count++;
                }}}}
    else{
        printf("Row & column should be equal!");
        return 1;
    }
    if(count==(b*c)){
        printf("Symmetric matrix");
    }
    else{
        printf("Not symmetric matrix");
    }
    return 0;
}
    