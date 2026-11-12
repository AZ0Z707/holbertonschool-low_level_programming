#include <stdio.h>

/**
 * main - Simple calculator with addition and menu loop.
 *
 * Return: Always 0.
 */
int main(void)
{
    int choice;
    int a;
    int b;
    int result;

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

        if (choice == 1)
        {
            printf("A: ");
            fflush(stdout);
            if (scanf("%d", &a) != 1)
                return (1);

            printf("B: ");
            fflush(stdout);
            if (scanf("%d", &b) != 1)
                return (1);

            result = a + b;
            printf("Result: %d\n", result);
        }
    }

    return (0);
}
