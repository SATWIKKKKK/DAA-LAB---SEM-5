#include <stdio.h>

int main() {
    FILE *fp;
    int ch;

    fp = fopen("input.txt", "r");

    if (fp == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    printf("Content of the file:\n");

    while ((ch = getc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}
