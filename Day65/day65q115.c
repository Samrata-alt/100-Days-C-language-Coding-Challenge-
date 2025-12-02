/*Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram
Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int areAnagrams(char str1[], char str2[]) {
    int freq[26] = {0};

   
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }

    for (int i = 0; str1[i] != '\0'; i++) {
        if (isalpha(str1[i])) {
            freq[tolower(str1[i]) - 'a']++;
        }
    }

    for (int i = 0; str2[i] != '\0'; i++) {
        if (isalpha(str2[i])) {
            freq[tolower(str2[i]) - 'a']--;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';  
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';  

    if (areAnagrams(str1, str2)) {
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }

    return 0;
}
