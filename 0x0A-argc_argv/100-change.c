#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the minimum number of coins
 * @argc: no of arguments
 * argv: arrays of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int position, total, change, aux;
	int coins[] = {25, 10, 5, 2, 1};

	position = total = change = aux;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]);

	if (total < 0)
	{
		printf("0\n");
		return (0);
	}
	while (coins[position])

	{
		if (total >= coins[position])
		{
			aux = (total / coins[position]);
			change += aux;
			total -= coins[position] * aux;
		}

		position++;

	}

	printf("%d\n", change);
	return (0);
}
