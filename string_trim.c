#include <stdio.h>
#include <string.h>

int main() {
    char str[100], part[100];
    int start, length, i;

    printf("Enter a string: ");

    fgets(str, sizeof(str), stdin);


    str[strcspn(str, "\n")] = '\0';

    printf("Enter starting position (0-based index): ");
    scanf("%d", &start);

    printf("Enter number of characters to extract: ");
    scanf("%d", &length);


    for (i = 0; i < length && (start + i) < strlen(str); i++) {
        part[i] = str[start + i];
    }
    part[i] = '\0';

    printf("Extracted part: %s\n", part);

    return 0;
}
