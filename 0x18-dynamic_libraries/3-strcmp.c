#include "main.h"

/**
 * _strcmp - function that compares two srings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: zero if s1 == s2
 * negative no. if s1 < s2
 * positive no. if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
