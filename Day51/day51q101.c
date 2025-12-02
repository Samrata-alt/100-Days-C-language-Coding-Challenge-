/*Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4
Input 2:
nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1
Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5*/
#include <stdio.h>

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
    int target;
    printf("Enter the target element:");
    scanf("%d",&target);

    int first=-1,last=-1;
    for(int i=0;i<n;i++){
        if(a[i]==target){
            first=i;
        }
    }
    if(first!=-1){
        for(int i=n-1;i>=0;i--){
            if(a[i]==target){
                last=i;
            }
        }
    }

    printf("%d %d",last,first);
    return 0;
}
