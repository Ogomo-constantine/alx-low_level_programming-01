#include "main.h"
/**
 * *_strcpy - function that copies string pointers
 * @dest: distiny
 * @src: copy
 * Return: copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
