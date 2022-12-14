#include "main.h"

/**
 * print_sign - print sign of a number
 * @n: number of a sign to be printed
 * Return: 1 if number is greater than zero
 * 0 if is zero
 * -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
