/*Q100: Print all sub-strings of a string.
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c*/
#include <stdio.h>
#include <string.h>
void substrings(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            for (int k = i; k <= j; k++) {
                putchar(str[k]);
            }
            printf(" ");
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    substrings(str);
    return 0;
}
