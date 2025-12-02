/*Q82: Print each character of a string on a new line.
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i*/
#include <stdio.h>
int main() {
    char name[50];
    int i=0;
    printf("enter a word: ");
    scanf("%s",&name);

    while(name[i]!='\0')
    {
       printf("%c \n" ,name[i]);
       i++;
    }
}
