/*Q79: Perform diagonal traversal of a matrix.
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9*/
#include <stdio.h>
int main(){
    int m,n;
    printf("enter the no of rows in matrix:");
    scanf("%d",&m);
    printf("enter the no of columns in matrix:");
    scanf("%d",&n);
    int a[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("Element-[%d][%d]:",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 2 * n - 1; i++) {
        int row_start, col_start;
        if (i< n) {
            row_start = 0;
            col_start = i;
        } else {
            row_start = i - n + 1;
            col_start = n - 1;
        }
        for (int i = row_start, j = col_start; i < n && j >= 0; ++i, --j) {
            printf("%d ", a[i][j]);
        }
    }
    return 0;
}
