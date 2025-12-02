/*Q97: Print the initials of a name.
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    fgets(name, sizeof(name), stdin);
    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }
    if (isalpha(name[0])) {
        printf("%c.", toupper(name[0]));
    }
    for (int i = 1; name[i] != '\0'; i++) {
        if (isspace(name[i]) && isalpha(name[i + 1])) {
            printf("%c.", toupper(name[i + 1]));
        }
    }
    printf("\n");
    return 0;
}
