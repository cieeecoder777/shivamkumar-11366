#include <stdio.h>

int main()
{
    int menu;       
    int a, b;          
    do
    {
        printf("\n SIMPLE MODAL CALCULATOR ");

        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Exit");

        printf("\nEnter your menu: ");
        scanf("%d", &menu);

        
        if (menu >= 1 && menu <= 4)
        {
            printf("Enter first number: ");
            scanf("%d", &a);

            printf("Enter second number: ");
            scanf("%d", &b);
        }


        switch (menu)
        {
            case 1:
                printf("Addition = %d", a + b);
                break;

            case 2:
                printf("Subtraction = %d", a - b);
                break;

            case 3:
                printf("Multiplication = %d", a * b);
                break;

            case 4:
                if (b != 0)
                    printf("Division = %d", a / b);
                else
                    printf("Cannot divide by zero");
                break;

            case 5:
                printf("Thank you! Program ended.");
                break;

            default:
                printf("Invalid choice! Try again.");
        }

    } while (menu != 5); 

    return 0;
}