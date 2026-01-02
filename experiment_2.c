#include <stdio.h>
int main() {
    printf("Shivam Kumar,11366\n");
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b; printf("Sum = %d\n", sum);
    if (a > b) printf("Largest = %d\n", a);
    else if (b > a) printf("Largest = %d\n", b);
    else printf("Both numbers are equal.\n");
    return 0;
}