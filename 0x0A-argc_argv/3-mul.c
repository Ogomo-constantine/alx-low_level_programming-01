#include <stdio.h>
#include "main.h"

/**
 * main - print the multiplication of two numbers
 * @argc: no. of argument
 * @argv: array of argument
 * Retur: 0 if true 1 if false
 */
int _atoi(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = _atoi(argv[1]);
		b = _atoi(argv[2]);

				printf("%d\n", a * b);
				return (0);
	}
	printf("Error\n");
	return (1);
}
