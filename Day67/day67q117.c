/*Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15
Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17
Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7*/
#include <stdio.h>

int main() {
    int m,n;
    printf("For first array:\n");
    printf("Enter the range of the array: ");
    scanf("%d", &m);
    int a[m];
    for (int i = 0; i < m; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &a[i]);
    }
    printf("For second array:\n");
    printf("Enter the range of the array:");
    scanf("%d",&n);
    int b[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &b[i]);
    }
    int temp;
    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < m - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (b[j] > b[j + 1]) {
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }
    int i=0;
    int merged[m+n];
    for(i=0;i<m;i++){      
        merged[i]=a[i];
    }
    for(int j=0;j<n;j++){          
        merged[i+j]=b[j];
    }

    for (int i = 0; i < m+n - 1; i++) {
        for (int j = 0; j < m+n - i - 1; j++) {
            if (merged[j] > merged[j + 1]) {
                temp = merged[j];
                merged[j] = merged[j + 1];
                merged[j + 1] = temp;
            }
        }
    }
    printf("Sorted merged Array=");
    for(int i=0;i<m+n;i++){          
        printf("%d   ",merged[i]);
    }
    return 0;
}
