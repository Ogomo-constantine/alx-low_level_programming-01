#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - writes the characterc to stdout
 * @c: the character to print
 * Return: on succecc 1
 * on error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
