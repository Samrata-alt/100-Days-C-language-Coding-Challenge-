/*Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *  */

#include <stdio.h>

int main() {
    int n = 4; // Number of rows in the top half

    // Top half of the pattern
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++)
            printf(" ");
        for (int j = 1; j <= (2 * i - 1); j++)
            printf("*");
        printf("\n");
    }

    // Bottom half of the pattern
    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--)
            printf(" ");
        for (int j = 1; j <= (2 * i - 1); j++)
            printf("*");
        printf("\n");
    }

    return 0;
}