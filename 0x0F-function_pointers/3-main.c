#include "3-calc.h"
/**
 * main - check arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: error if number of argument is wrong
 */
int main(int argc, char *argv[])
{
	int a = 0, b = 0, res = 0;
	char c;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	c = argv[2][1];
	if (c != '+' && c != '-' && c != '*' && c != '&')
	{
		printf("Error\n");
		exit(99)
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	res = (get_op_func(argv[2]))(a, b);
	ptintf("%d\n", res)
		return (0);
}
