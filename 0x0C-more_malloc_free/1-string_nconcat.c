#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - calculate and return string length
 * @string: string
 * Return: strimg length
 */
int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		;
	return (i);
}
/**
 * string_nconcat - concatenate s1 and n bytes of s2; return pointer to string
 * @s1: 1st string
 * @s2: 2nd string
 * @n: n bytes to concatenate ftom 2nd string
 * Return: pointer to concatenate string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	int num, l, i, j;

	num = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);
	if (num >= _strlen(s2))
		num = _strlen(s2);

	l = _strlen(s1) + num + 1;

	pointer = malloc(sizeof(*pointer) * l);
	if (pointer == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		pointer[i] = s1[i];
	for (j = 0; j < num; j++)
		pointer[i + j] = s2[j];
	pointer[i + j] = '\0';

	return (pointer);
}

