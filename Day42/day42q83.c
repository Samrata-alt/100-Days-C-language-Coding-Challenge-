/*Q83: Count vowels and consonants in a string.
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3*/
#include <ctype.h>
#include <stdio.h>
int main()
{

    char word[150];
    int v = 0, c = 0;
    printf("Enter a word: ");
    fgets(word, sizeof(word), stdin);

    for (int i = 0; word[i] != '\0'; ++i)
    {
        word[i] = tolower(word[i]);
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' ||
            word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || word[i] == 'E' || word[i] == 'I' ||
            word[i] == 'O' || word[i] == 'U')
        {
            v++;
        }
        else if ((word[i] >= 'a' && word[i] <= 'z'))
        {
            c++;
        }
    }

    printf("Vowels: %d", v);
    printf("\nConsonants: %d", c);

    return 0;
}
