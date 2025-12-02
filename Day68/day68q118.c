/*Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1
Input 2:
nums1 = [1,2,3]
Output 2:
0
Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter the range of the array: ");
    scanf("%d", &n);
    int a[n]; 
    for (int i = 0; i < n; i++) {
        printf("Enter the %d element: ", i);
        scanf("%d", &a[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    int b=n+1;
    int c=b * (b + 1) / 2;
    int miss=c-sum;
    printf("The missing number= %d",miss);
    return 0;
}
