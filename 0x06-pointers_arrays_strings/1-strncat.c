#include "main.h"

/**
 * _strncat - code that concatenate two strings
 * @dest: string to be appende upon
 * @src: string to be completed at the end of dest
 * @n: integer
 * Retutn: new concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ch = dest;

	while (*ch != '\0')
	{
		ch++;
	}

	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		*ch = *src;
		ch++;
	}

	*ch = ('\0');

	return (dest);
}
