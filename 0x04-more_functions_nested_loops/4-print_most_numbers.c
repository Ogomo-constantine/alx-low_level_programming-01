#include "main,h"
/**
 * print_most_numbers - prints the number o to 9 followed by a new line
 * Description: excluding 2 and 4
 * Return: Number 0 to 9
 */
void print_most_numbers(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
	if ((x == 50) || (x == 52))
	{
		continue;
	}
	_putchar(x + '0');
	}
	_putchar('\n');
}
