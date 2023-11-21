#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50], concatStr[100];
    printf("Enter the first string: ");

    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; 

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    str2[strcspn(str2, "\n")] = '\0'; 
    printf("\nString Operations:\n");
   
    strcpy(concatStr, str1);
    printf("Copied String: %s\n", concatStr);

    strcat(concatStr, str2);
    printf("Concatenated String: %s\n", concatStr);

    printf("Length of the first string: %zu\n", strlen(str1));
    printf("Length of the second string: %zu\n", strlen(str2));

    int cmpResult = strcmp(str1, str2);
    printf("String Comparison Result: %d\n", cmpResult);

    int start, end;
    printf("Enter the start index for substring: ");
    scanf("%d", &start);
    printf("Enter the end index for substring: ");
    scanf("%d", &end);

    if (start >= 0 && end < strlen(str1) && start <= end) {
        printf("Substring: %.*s\n", end - start + 1, str1 + start);
    } else {
        printf("Invalid substring indices.\n");
    }

    return 0;
}