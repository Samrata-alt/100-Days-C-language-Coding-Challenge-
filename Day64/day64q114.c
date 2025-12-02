/*Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3
Input 2:
s = "bbbbb"
Output 2:
1
Input 3:
s = "pwwkew"
Output 3:
3*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int freq[256];     
    int left = 0, right = 0;
    int max = 0, len = 0;

    printf("Enter a string: ");
    scanf("%s", s);

    for (int i = 0; i < 256; i++)
        freq[i] = 0;

    while (s[right] != '\0') {
        freq[(int)s[right]]++;  
        while (freq[(int)s[right]] > 1) {
            freq[(int)s[left]]--;
            left++;
        }

        len = right - left + 1;
        if (len > max)
            max = len;

        right++;
    }

    printf("%d\n", max);
    return 0;
}
