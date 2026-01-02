#include <stdio.h>

int main() { 
    printf("shivam kumar,11366\n");
    int i, a, b, temp;
    float f;
    char c;
    double d;

    printf("Enter an integer: ");
    scanf("%d", &i);

    printf("Enter a float: ");
    scanf("%f", &f);

    printf("Enter a character: ");
    scanf(" %c", &c);   // space before %c to skip newline

    printf("Enter a double: ");
    scanf("%lf", &d);

    printf("Enter two integers to swap: ");
    scanf("%d %d", &a, &b);

    printf(
"Before swapping: a = %d, b = %d\n"
, a, b);

    temp = a;
    a = b;
    b = temp;

    printf("Integer: %d\n"
, i);
    printf("Float: %.2f\n"
, f);
    printf("Character: %c\n"
, c);
    printf("Doubl: %.2lf\n"
, d);
    printf("After swapping: a = %d\n, b = %d/n"
, a, b);

    return 0;
}