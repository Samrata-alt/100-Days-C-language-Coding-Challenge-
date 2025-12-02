/*Q96: Reverse each word in a sentence without changing the word order.
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverse(char *start, char *end)
{
    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void reverseword(char *str)
{
    char *wordStart = NULL;
    char *temp = str;

    while (*temp)
    {
        if (!isspace(*temp) && wordStart == NULL)
        {
            wordStart = temp;
        }
        if ((isspace(*temp) || *(temp + 1) == '\0') && wordStart)
        {
            char *wordEnd = (isspace(*temp)) ? temp - 1 : temp;
            reverse(wordStart, wordEnd);
            wordStart = NULL;
        }
        temp++;
    }
}

int main()
{
    char sentence[200];
    print("Enter a sentence:");
    fgets(sentence, sizeof(sentence), stdin);
    size_t len = strlen(sentence);
    if (len > 0 && sentence[len - 1] == '\n')
    {
        sentence[len - 1] = '\0';
    }
    reverseword(sentence);
    printf("%s\n", sentence);
    return 0;
}
