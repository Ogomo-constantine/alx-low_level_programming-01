#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * _putchar - write character c to stdout
 * @c: character to print
 * Return: on succcess 1.
 * on error -1, and error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
