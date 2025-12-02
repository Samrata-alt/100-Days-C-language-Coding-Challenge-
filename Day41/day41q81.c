/*Q81: Count characters in a string without using built-in length functions.
Sample Test Cases:
Input 1:
Hello
Output 1:
5
Input 2:
Output 2:
1*/
#include <stdio.h>
#include <string.h>
int main(){
    char word[100];
    printf("enter a word : ");
    fgets(word, sizeof(word),stdin);
    printf("%s",word);
    return 0;
}
