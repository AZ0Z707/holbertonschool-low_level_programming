#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: String to search.
 * @accept: String containing accepted characters.
 *
 * Return: Pointer to the first matching byte, or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (&s[i]);

			j++;
		}

		i++;
	}

	return (NULL);
}
