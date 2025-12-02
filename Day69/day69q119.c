/*Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3
Input 2:
nums1 = [1,2,2]
Output 2:
2
Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1*/
#include <stdio.h>

int main()
{
    int n, p = 0;
    int freq[10];
    for (int i = 0; i < 10; i++)
    {
        freq[i] = 0;
    }
    printf("Enter the range of the array:");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element of the array:", i);
        scanf("%d", &a[i]);
        freq[a[i]]++;
        if (freq[a[i]] == 2)
        {
            p = a[i];
        }
    }
    printf("%d", p);

    return 0;
}
