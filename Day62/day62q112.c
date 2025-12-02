/*Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11
Input 2:
arr[] = [-2, -4]
Output 2:
-2
Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter the range of the array: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    int max= a[0];   
    int curr = a[0];    

    for (int i = 1; i < n; i++) {
        curr = (a[i] > curr + a[i]) ? a[i] : curr + a[i];
        if (curr > max)
            max= curr;
    }

    printf("Maximum subarray sum: %d\n", max);

    return 0;
}
