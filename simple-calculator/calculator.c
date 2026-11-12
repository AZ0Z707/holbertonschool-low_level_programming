#include <stdio.h>

/**
 * main - Simple calculator with four arithmetic operations.
 *
 * Return: 0 on success, 1 on input error.
 */
int main(void)
{
    int choice;
    double a;
    double b;
    double result;

    printf("Simple Calculator\n");

    while (1)
    {
        printf("1) Add\n");
        printf("2) Subtract\n");
        printf("3) Multiply\n");
        printf("4) Divide\n");
        printf("0) Quit\n");
        printf("Choice: ");
        fflush(stdout);

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid choice\n");
            return (1);
        }

        if (choice == 0)
        {
            printf("Bye!\n");
            break;
        }

        if (choice < 1 || choice > 4)
        {
            printf("Invalid choice\n");
            continue;
        }

        printf("A: ");
        fflush(stdout);
        if (scanf("%lf", &a) != 1)
            return (1);

        printf("B: ");
        fflush(stdout);
        if (scanf("%lf", &b) != 1)
            return (1);

        if (choice == 1)
        {
            result = a + b;
        }
        else if (choice == 2)
        {
            result = a - b;
        }
        else if (choice == 3)
        {
            result = a * b;
        }
        else
        {
            if (b == 0.0)
            {
                printf("Error: division by zero\n");
                continue;
            }

            result = a / b;
        }

        printf("Result: %g\n", result);
    }

    return (0);
}
