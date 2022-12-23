#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @str: string
 * Return: the encorded string
 */
char *leet(char *str)
{
	int i1, i2;
	char c1[] = "aAeEoOtTlL";
	char c2[] = "4433007711";

	for (i1 = 0; str[i1] != '\0'; i1++)
		{
			for (i2 = 0; i2 < 10; i2++)
			{
				if (str[i1] == c1[i2])
				{
					str[i1] = c2[i2];
				}
			}
		}
	return (str);
}
