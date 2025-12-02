/*Q77: Check if the elements on the diagonal of a matrix are distinct.
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False
Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True*/
#include <stdio.h>
int main(){
    int m,n;
    printf("enter the no of rows in matrix:");
    scanf("%d",&m);
    printf("enter the no of columns in matrix:");
    scanf("%d",&n);
     if(m != n) {
        printf("Enter a square matrix");
        return 0;
    }
  
    int a[m][n]
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("Element-[%d][%d]:",i,j);
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0;i<m;i++){
        for(j=i+1;j<n;j++){
            if(a[i][i]==a[j][j]){
                printf("the diagonals are not distinct!!");
                return 0;
            }
        }
    }
    printf("the digonals are distinct");

    return 0;
}
