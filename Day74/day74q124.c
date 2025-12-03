/*Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt*/

#include <stdio.h>

int main() {
    FILE *src, *dest;
    char source[100], destf[100];
    char ch;

    printf("Enter source filename: ");
    scanf("%s", source);

    printf("Enter destination filename: ");
    scanf("%s", destf);

    src = fopen(source, "r");
    if (src == NULL) {
        printf("Error: Could not open source file.\n");
        return 1;
    }

    dest = fopen(destf, "w");
    if (dest == NULL) {
        printf("Error: Could not open destination file.\n");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, destf);
    }

    fclose(src);
    fclose(destf);

    printf("File copied successfully to %s\n", destf);

    return 0;
}
