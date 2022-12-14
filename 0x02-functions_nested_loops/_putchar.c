#include "main.h"
#include <unistd>

/**
 * _putchar - write the character c to stdout
 * @c: the character to print
 *
 * Return: On success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

