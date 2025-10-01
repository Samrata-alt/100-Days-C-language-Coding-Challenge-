//Add two matrices.

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
    int e,f,d[50][50];
    //Input value for row & column from user
    printf("Enter row value:");
    scanf("%d",&e);
    printf("Enter column value:");
    scanf("%d",&f);
    //Takes value from user for matrix
    for(i=0;i<e;i++){
        for(int j=0;j<f;j++){
            printf("Enter the element:");
            scanf("%d", &d[i][j]);
        }
    }
    int h,k,g[50][50];
    //Input value for row & column from user
    printf("Enter row value:");
    scanf("%d",&h);
    printf("Enter column value:");
    scanf("%d",&k);
    //Third matrix
    for(i=0;i<h;i++){
        for(int j=0;j<k;j++){
            g[i][j]=0;
        }
    }
    //Checking if both matrix have equal row & column
    if(b==e && c==f){
        for(i=0;i<h;i++){
            for(int j=0;j<k;j++){
                g[i][j]=a[i][j]+d[i][j];
            }
        }
    }
    //Prints the matrix
    for(i=0;i<b;i++){
        for(int j=0;j<c;j++){
            printf("%d\t", g[i][j]);
        }
        printf("\n");
    }
    return 0;
}