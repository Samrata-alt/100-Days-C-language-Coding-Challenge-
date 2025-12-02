/*Q78: Find the sum of main diagonal elements for a square matrix.
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15*/
#include <stdio.h>
int main(){
    int m,n;
    printf("enter the no of rows in matrix:");
    scanf("%d",&m);
    printf("enter the no of columns in matrix:");
    scanf("%d",&n);
     if(m != n) {
        printf("Not a square matrix");
        return 0;
    }
    int a[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("Element-[%d][%d]:",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i][i];
    }
    printf("the sum of the diagonals arae : %d",sum);
    return 0;
}
