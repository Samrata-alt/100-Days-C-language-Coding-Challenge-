/*Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700
Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39
Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400*/
#include <stdio.h>

int main() {
    int n, k;
    printf("Enter the range of the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("No subarrays possible.\n");
        return 1;
    }

    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += arr[i];  
    }

    for (int i = 1; i <= n - k; i++) {
        int currs = 0;
        for (int j = i; j < i + k; j++) {
            currs += arr[j];
        }
        if (currs > sum) {
            sum = currs;
        }
    }

    printf("%d\n",sum);
    return 0;
}
