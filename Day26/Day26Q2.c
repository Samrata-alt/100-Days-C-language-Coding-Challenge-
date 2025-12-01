/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
*/

#include <stdio.h>
int main(){
    int a,i,j;
    char t='*';           //Stores * in t to print later on
    printf("Enter the range:");
    scanf("%d",&a);        //Stores range value in a 

    //Top half of pattern
    for(i=1;i<=a;i++){
        for(j=1;j<=2*i-1;j++) {
            printf("*\n");
        }
        printf("\n");
    }
    //Bottom half of pattern
    for(i=a-1;i>=1;i--){
        for(j=1;j<=2*i-1;j++){
            printf("*\n");
        }
        printf("\n");
    }
    return 0;
}