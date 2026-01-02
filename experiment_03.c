#include <stdio.h>

int main() {
    printf("Shivam Kumar,11366\n");
    int num, a, b, c; int x, y, max;
    char op; float n1, n2, result;
    
    printf("Enter a number to check Odd/Even: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);

    printf("\nEnter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b) {
        if (a > c)
            printf("Maximum = %d\n", a);
        else
            printf("Maximum = %d\n", c);
    } else {
        if (b > c)
            printf("Maximum = %d\n", b);
        else
            printf("Maximum = %d\n", c);
    }

    printf("\nEnter two numbers for ternary max check: ");
    scanf("%d %d", &x, &y);
    max = (x > y) ? x : y;
    printf("Maximum (using ternary) = %d\n", max);

    printf("\nEnter two numbers for calculator: ");
    scanf("%f %f", &n1, &n2);
    printf("Choose operation (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            result = n1 + n2;
            printf("Result = %.2f\n", result);
            break;

        case '-':
            result = n1 - n2;
            printf("Result = %.2f\n", result);
            break;

        case '*':
            result = n1 * n2;
            printf("Result = %.2f\n", result);
            break;

        case '/':
            if (n2 != 0)
                printf("Result = %.2f\n", n1 / n2);
            else
                printf("Error! Division by zero.\n");
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
