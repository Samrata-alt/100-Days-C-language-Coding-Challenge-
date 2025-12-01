/*Write a program to print the following pattern:
1
12
123
1234
12345 */

#include <stdio.h>
int main(){
    int a,i,j;
    printf("Enter the range:");
    scanf("%d",&a);        //Stores range value in a 

    //Loop till a for pattern
    for(i=1;i<=a;i++){          //loop for rows
        for(j=1;j<=i;j++){      //loop for columns
            printf("%d ", j);
            
        }
        printf("\n");           //moves to new line after j loop
    }
    return 0;
}