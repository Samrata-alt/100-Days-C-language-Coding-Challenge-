/*Write a program to print the following pattern:
    5
   45
  345
 2345
12345*/

#include <stdio.h>
int main(){
    int a,i,j;
    printf("Enter the range:");
    scanf("%d",&a);        //Stores range value in a 

    //Loop till a for pattern
    for(i=1;i<=a;i++){          //loop for rows
        // Print leading spaces
        for(j=0;j<a-i;j++){
            printf(" ");
        }
        for(j=a-i+1;j<=a;j++){      //loop for columns
            printf("%d", j);
        }
        printf("\n");           //moves to new line after j loop
    }
    return 0;
}