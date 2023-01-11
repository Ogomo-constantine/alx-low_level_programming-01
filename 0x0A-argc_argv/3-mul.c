#include <stdio.h>
#include "main.h"

/**
 * main - print the multiplication of two numbers
 * @argc: no. of argument
 * @argv: array of argument
 * Retur: 0 if true 1 if false
 */
int main(int argc, char *argv[])
{
	int a, b;

	b = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (a = 1; a < argc; a++)
	{
		b = b * _atoi(argv[a]);
	}
	printf("%d\n", b);
	return (0);
}
