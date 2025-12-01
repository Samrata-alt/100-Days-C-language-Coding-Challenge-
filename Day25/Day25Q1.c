/*Write a program to print the following pattern:
5
45
345
2345
12345 */

#include <stdio.h>
int main(){
    int a,i,j;
    printf("Enter the range:");
    scanf("%d",&a);        //Stores range value in a 

    //Loop till a for pattern
    for(i=a;i>=1;i--){          //loop for rows
        for(j=i;j<=a;j++){      //loop for columns
            printf("%d ", j);
            
        }
        printf("\n");           //moves to new line after j loop
    }
    return 0;
}