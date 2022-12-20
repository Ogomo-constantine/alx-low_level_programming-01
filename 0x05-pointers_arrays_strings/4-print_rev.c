#include "main.h"
/**
 * print_rev - print a string in a reverse
 * @s: string
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (i = i - 1; s[i] != '\0'; i--)
	{
		printf(s[i]);
	}
	printf('\n');
}
