#include "main.h"
/**
 * print_rev - print a string in a reverse
 * @s: string
 */
void print_rev(char *s)
{
	size_t len = strlen(s);

	for (size_t i = len; i > 0; i--)
	{
		printf("%c", s[i - 1]);
	}
	printf("\n");
}
