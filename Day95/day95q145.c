/*Q145: Return a structure containing top student's details from a function.
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96*/
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student topstudent(struct Student s[], int n) {
    int i, index = 0;
    for (i = 1; i < n; i++) {
        if (s[i].marks > s[index].marks) {
            index = i;
        }
    }

    return s[index];  
}

int main() {
    int n = 3;   
    struct Student s[3];
    printf("Enter 1st student details:");
    scanf("%s %d %d", s[0].name, &s[0].roll, &s[0].marks);
    printf("Enter 2nd student details:");
    scanf("%s %d %d", s[1].name, &s[1].roll, &s[1].marks);
    printf("Enter 3rd student details:");
    scanf("%s %d %d", s[2].name, &s[2].roll, &s[2].marks);
    struct Student top = topstudent(s, n);
    printf("Top Student: %s | Roll: %d | Marks: %d",top.name, top.roll, top.marks);
    return 0;
}
