/*Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025*/
#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    int day, month, year;
    char m[4];

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%s", date);
    sscanf(date, "%d/%d/%d", &day, &month, &year);
    switch(month) {
        case 1: strcpy(m, "Jan"); break;
        case 2: strcpy(m, "Feb"); break;
        case 3: strcpy(m, "Mar"); break;
        case 4: strcpy(m, "Apr"); break;
        case 5: strcpy(m, "May"); break;
        case 6: strcpy(m, "Jun"); break;
        case 7: strcpy(m, "Jul"); break;
        case 8: strcpy(m, "Aug"); break;
        case 9: strcpy(m, "Sep"); break;
        case 10: strcpy(m, "Oct"); break;
        case 11: strcpy(m, "Nov"); break;
        case 12: strcpy(m, "Dec"); break;
        default: printf("Invalid month!\n"); return 0;
    }
    printf("%d-%s-%d\n", day, m, year);

    return 0;
}
