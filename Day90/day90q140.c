/*Q140: Define a struct with enum Gender and print person's gender.
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male*/
#include <stdio.h>
#include <string.h>

enum gender{MALE,FEMALE,OTHER};

struct person
{
    char name[20];
    enum gender g;
};

int main()
{
    struct person p;
    char g[10];

    printf("Enter Name: ");
    scanf("%s", p.name);

    printf("Enter Gender (MALE / FEMALE / OTHER): ");
    scanf("%s", g);

    if (strcmp(g, "MALE") == 0)
        p.g = MALE;
    else if (strcmp(g, "FEMALE") == 0)
        p.g = FEMALE;
    else if (strcmp(g, "OTHER") == 0)
        p.g = OTHER;
    else
    {
        printf("Invalid Gender!\n");
        return 0;
    }

    printf("Name: %s\n", p.name);
    if (p.g == MALE)
        printf("Gender: Male\n");
    else if (p.g == FEMALE)
        printf("Gender: Female\n");
    else if (p.g == OTHER)
        printf("Gender: Other\n");

    return 0;
}
