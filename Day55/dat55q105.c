/*Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3
Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2
Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter the range of the array: ");
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter the element %d:",i);
        scanf("%d",&a[i]);
    }
    int x=n/2;
    int majority=-1;
    for(int i=0;i<n;i++){
        int curr=a[i];
        int c=0;
        for(int j=0;j<n;j++){
            if(a[j]==curr){
                c++;
            }
        }
        if(c>x){
            majority=curr;
            break;
        }
    }
    printf("Majority Element=%d",majority);
    return 0;
}
