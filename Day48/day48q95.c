/*Q95: Check if one string is a rotation of another.
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation
Input 2:
abc
acb
Output 2:
Not rotation*/
#include <stdio.h>
#include <string.h>

void check(const char *str1, const char *str2) {
    int len = strlen(str1);
    if (len != strlen(str2)) {
        printf("Not rotation\n");
        return;
    } 
    char temp[2 * len + 1]; 
    strcpy(temp, str1);
    strcat(temp, str1);
    if (strstr(temp, str2))
        printf("Rotation\n");
    else
        printf("Not rotation\n");
}

int main() {
    char str1[100], str2[100];
    scanf("%s", str1);
    scanf("%s", str2);
    check(str1, str2);
    return 0;
}
