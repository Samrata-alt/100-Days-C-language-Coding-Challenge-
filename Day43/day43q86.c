/*Q86: Check if a string is a palindrome.
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome
Input 2:
hello
Output 2:
Not palindrome*/
#include <stdio.h>
#include <string.h> 

int main() {
    char str[100]; 
    int i, l, p = 0; 

    printf("Enter a string: ");
    scanf("%s", str); 
    l = strlen(str); 

    for (i = 0; i < l / 2; i++) {
        if (str[i] != str[l - i - 1]) {
            p = 1; 
            break;    
        }
    }

    if (p == 0) {
        printf("palindrome.\n");
    } else {
        printf("palindrome.\n");
    }

    return 0;
}
