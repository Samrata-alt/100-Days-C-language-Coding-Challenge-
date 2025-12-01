/*Write a program to print the following pattern:
*****
 ****
  ***
   **
    * */

#include <stdio.h>
int main(){
    int a,i,j;
    char t='*';           //Stores * in t to print later on
    printf("Enter the range:");
    scanf("%d",&a);        //Stores range value in a 

    //Loop till a for pattern
    for(i=a;i>=1;--i){          //loop for rows
        // Print leading spaces
        for(j=0;j<a-i;++j){
            printf(" ");
        }
        for(j=1;j<=i;++j){      //loop for columns
            printf("%c", t);
        }
        printf("\n");           //moves to new line after j loop
    }
    return 0;
}