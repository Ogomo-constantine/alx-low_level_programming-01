#include "main.h"

/**
 * _strlen - function that returns the length of string
 * @s: input of string
 * Return: length of string
 */
int _strlen(char *s)
{
	int leng = 0;

	while (*s != '\0')
	{
		leng++;
		s++;
	}
	return (leng);
}
