/*Write a program to input a character and check whether it is a vowel or consonant using if–else.
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant
*/
#include <stdio.h>
char main(){
    char a;
    printf("Enter the character:");
    scanf("%s",&a);
    if(a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U'){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
    return 0;

}