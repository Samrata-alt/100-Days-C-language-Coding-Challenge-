/*Write a program to input time in seconds and convert it to hours:minutes:seconds format.
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2
*/
#include <stdio.h>

int main() {
    int a, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &a);        

    hours = a / 3600;       

    minutes = (a % 3600) / 60;      

    seconds = (a % 3600) % 60;      

    printf("H:M:S - %d:%d:%d\n", hours, minutes, seconds);   
    return 0;
}