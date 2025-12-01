/*Write a program to find and display the sum of the first n natural numbers.
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55
*/
#include <stdio.h>
int main(){
    int i,a,sum;
    printf("enter the value:");
    scanf("%d",&a);
    sum=0;
    for(i=0;i<=a;i++){
        sum=sum+i;  
    }
    printf("Total sum:%d",sum);
    return 0;
}