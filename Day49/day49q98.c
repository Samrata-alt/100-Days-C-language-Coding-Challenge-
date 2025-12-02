/*Q98: Print initials of a name with the surname displayed in full.
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    fgets(name, sizeof(name), stdin);

    // Remove trailing newline if present
    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    char *token = strtok(name, " ");
    char lastWord[50];
    int wordCount = 0;

    while (token != NULL) {
        wordCount++;
        strcpy(lastWord, token); // Keep updating to get the last word
        token = strtok(NULL, " ");
    }

    // Reset tokenization to extract initials
    token = strtok(name, " ");
    for (int i = 0; i < wordCount - 1; i++) {
        printf("%c.", toupper(token[0]));
        token = strtok(NULL, " ");
    }

    // Print the full surname
    printf("%s\n", lastWord);
    return 0;
}
