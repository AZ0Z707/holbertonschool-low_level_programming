#include <stdio.h>

/**
 * main - Display a calculator menu with choice validation.
 *
 * Return: Always 0.
 */
int main(void)
{
    int choice;

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
        }
    }

    return (0);
}
