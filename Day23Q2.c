/*Write a program to print the following pattern:
*****
*****
*****
*****
***** */

#include <stdio.h>
int main(){
    int a,i;
    printf("Enter the range:");
    scanf("%d",&a);
    //Loop till a for pattern
    for(i=0;i<a;i++){
        printf("*****\n");
    }
    return 0;
}