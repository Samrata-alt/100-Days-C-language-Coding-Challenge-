/*Q84: Convert a lowercase string to uppercase without using built-in functions.
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO*/
#include <stdio.h>
int main() {
    char a[100]; 
    int i = 0;    
    printf("Enter a lowercase string: ");
    gets(a); 
    while (a[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; 
        }
        i++; 
    }
    printf("Uppercase string: %s\n", a); 
    return 0;
}
