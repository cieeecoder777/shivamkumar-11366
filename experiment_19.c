#include <stdio.h>
#include <string.h>

int main() {
    char a[20] = "Hello";
    char b[20] = "World";

    printf("Length: %lu\n", strlen(a));
    strcpy(a, b);
    strcat(a, b);

    printf("String: %s\n", a);
    printf("Compare: %d", strcmp(a, b));

    return 0;
}
