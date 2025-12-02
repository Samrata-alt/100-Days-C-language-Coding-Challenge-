/*Q80: Multiply two matrices.
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154*/
#include <stdio.h>
int main(){
    int m,n,p,q;
    printf("enter the no of rows in matrix A:");
    scanf("%d",&m);
    printf("enter the no of columns in matrix A:");
    scanf("%d",&n);
    printf("enter the no of rows in matrix B:");
    scanf("%d",&p);
    printf("enter the no of columns in matrix B:");
    scanf("%d",&q);
     if(n != p) {
        printf("Not possible");
        return 0;
    }
    int a[m][n], b[p][q], c[m][q];
    printf("Matrix A:");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("Element-[%d][%d]:",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix B:");
    for(int i = 0; i < p; i++){
        for(int j = 0; j < q; j++){
            printf("Element-[%d][%d]:",i,j);
            scanf("%d", &b[i][j]);
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < q; j++){
            c[i][j] = 0;
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < q; j++){
            for(int k=0;k<p;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("Product Matrix:");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < q; j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
