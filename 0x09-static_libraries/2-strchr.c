#include "main.h"
/**
 * _strchr - locates character to string
 * @s: string
 * @c: character to search
 * Return: pointer to the first occurence of the character c in the strings
 * NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\n')
	{
		if (*s == c)
		{
			return (s);
		}

		++s;
	}

	if (*s == c)
	{
		return (s);
	}
	return (0);
}
