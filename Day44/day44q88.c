/*Q88: Replace spaces with hyphens in a string.
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world*/
#include <stdio.h>
#include <string.h>
int main()
{
    char word[150];
    int len;
    printf("Enter a word: ");
    fgets(word, sizeof(word), stdin);
    len=strlen(word);
    for (int i = 0; i < len; i++) {
        if (word[i] == ' ') {
            word[i] = '-';
        }
    }
    printf("%s",word);
    return 0;
}
