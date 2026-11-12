#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to the string to print.
 */
void puts_half(char *str)
{
	int length;
	int i;

	length = 0;
	while (str[length] != '\0')
		length++;

	i = (length + 1) / 2;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
