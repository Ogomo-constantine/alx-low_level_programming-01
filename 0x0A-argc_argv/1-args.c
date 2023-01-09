#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed through it
 * @argc: no. of arguments
 * @argv: array of argument
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
