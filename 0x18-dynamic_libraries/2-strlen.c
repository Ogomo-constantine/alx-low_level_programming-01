#include "main.h"
/**
 * _strlen - a code that retuns the length of a string
 * @s: character string
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
