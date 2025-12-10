#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readString() {
    char temp[1000];
    scanf(" %[^\n]", temp);

    char *str = (char*)malloc(strlen(temp) + 1);
    if (!str) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    strcpy(str, temp);
    return str;
}

char* concat(char *s1, char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    char *result = (char*)malloc(len1 + len2 + 1);
    if (!result) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    strcpy(result, s1);
    strcat(result, s2);

    return result;
}

int main() {
    char *str1, *str2, *finalStr;

    printf("Enter first string: ");
    str1 = readString();

    printf("Enter second string: ");
    str2 = readString();

    finalStr = concat(str1, str2);

    printf("\nInitial Concatenation: %s\n", finalStr);

    free(str1);
    free(str2);

    while (1) {
        char choice;
        printf("\nDo you want to add more strings? (Enter Q to stop, any other key to continue): ");
        scanf(" %c", &choice);

        if (choice == 'Q')
            break;

        printf("Enter next string: ");
        char *next = readString();

        int newSize = strlen(finalStr) + strlen(next) + 1;
        finalStr = (char*)realloc(finalStr, newSize);
        if (!finalStr) {
            printf("Reallocation failed!\n");
            exit(1);
        }

        strcat(finalStr, next);
        free(next);

        printf("Updated Concatenation: %s\n", finalStr);
    }

    printf("\n\nFinal Concatenated String: %s\n", finalStr);

    free(finalStr);

    return 0;
}
