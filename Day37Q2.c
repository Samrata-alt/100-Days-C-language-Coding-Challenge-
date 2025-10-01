//Find the transpose of a matrix.

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
    //Prints the matrix
    for(i=0;i<b;i++){
        for(int j=0;j<c;j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    //Prints the transpose matrix
    for(i=0;i<c;i++){
        for(int j=0;j<b;j++){
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
    