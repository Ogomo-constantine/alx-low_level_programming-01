#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: the number
 * Return: value of digit
 */
int print_last_digit(int n)
{
	int ln = n % 10;

	if (ln < 0)
	{
	ln = last * -1;
	}
	_putchar(ln + '0');

	return (ln);
}
