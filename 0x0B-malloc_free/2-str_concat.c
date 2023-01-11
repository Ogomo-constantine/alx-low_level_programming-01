#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenate two strings
 * @s1: pointer to string
 * @s2: pointer to string
 * Return: pointer to newly allocated memory which has
 * s1, s2 and null byte
 * NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	unsigned int l1, l2, size, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = 0;
	while (s1[l1] != '\0')
		l1++;
	l2 = 0;
	while (s2[l2] != '\0')
		l2++;
	size = l1 + l2;

	arr = malloc((sizeof(char) * size) + 1);
	if (arr == NULL)
		return (NULL);

	i = 0;
	while (i < l1)
	{
		arr[i] = s1[i];
		i++;
	}
	j = 0;
	while (i <= size)
	{
		arr[i] = s2[j];
		i++;
		j++;
	}
	return (arr);
}
