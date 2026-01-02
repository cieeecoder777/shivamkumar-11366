#include <stdio.h>

int main() {
    int a, b, ch;
    scanf("%d %d", &a, &b);
    scanf("%d", &ch);

    switch (ch) {
        case 1: printf("%d", a + b); break;
        case 2: printf("%d", a - b); break;
        case 3: printf("%d", a * b); break;
        case 4: printf("%d", a / b); break;
        default: printf("Invalid Choice");
    }
    return 0;
}
