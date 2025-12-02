/*Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
Sample Test Cases:
Input 1:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5
Output 1:
2
Input 2:
arr = [1, 2, 8, 10, 11, 12, 19], x = 20
Output 2:
-1
Input 3:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
Output 3:
0
Input 4:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2
Output 4:
2*/
#include <stdio.h>
#include <stdlib.h>

int find(int a[], int n, int x)
{
    if (x <= a[0])
        return 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == x)
            return i;

        if (a[i] < x && a[i + 1] >= x)
            return i + 1;
    }
    return -1;
}

int main()
{
    int n;
    printf("Enter the range of the array:");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d:", i);
        scanf("%d", &a[i]);
    }
    int x;
    printf("Enter the target element:");
    scanf("%d", &x);
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    int index = find(a, n, x);
    if (index == -1)
        printf("%d", index);
    else
        printf("%d",index);
    return 0;
}
