#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup- returns a pointer to a newly allocated space in memory
 * @str: pointer to a string being duplicated
 * Return: NULL if str is NULL
 * pointer to duplicated string success
 * NULL if memory is insufficient
 */
char *_strdup(char *str);
{
	char *nstr;
	unsigned int l, i;

	if (str == NULL)
	{
		return (NULL);
	}
	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}

	nstr = malloc(sizeof(char) * (l + 1));

	if (nstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < l; i++)
	{
		nstr[i] = str[i];
	}
	nstr[l] = '\0';
	return (nstr);
}
