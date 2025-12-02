/*Q87: Count spaces, digits, and special characters in a string.
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1*/
#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main()
{

    char word[150];
    int d = 0, s = 0,sp=0;
    printf("Enter a word: ");
    fgets(word, sizeof(word), stdin);

    for (int i = 0; word[i] != '\0'; ++i)
    {
        word[i] = tolower(word[i]);
        if (isdigit(word[i]))
        {
            d++;
        }
        else if ((word[i]==' '))
        {
            s++;
        }
        else if(!isdigit(word[i])&&!isalpha(word[i])&&word[i]!='\n'){
            sp++;
        }
    }

    printf("Digits: %d\n", d);
    printf("Spaces: %d\n", s);
    printf("Special Character: %d",sp);
    return 0;
}
