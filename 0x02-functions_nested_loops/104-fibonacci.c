#include <stdio.h>

/**
 * main - print 1st 98 Fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	int count;
	unsigned long l1 = 0, l2 = 1, sum;
	unsigned long l1_h1, l1_h2, l2_h1, l2_h2;
	unsigned long h1, h2;

	for (count = 0; count < 92; count++)
	{
		sum = l1 + l2;
		printf("%lu, ", sum);
		l1 = l2;
		l2 = sum;
	}
	l1_h1 = l1 / 10000000000;
	l2_h1 = l2 / 10000000000;
	l1_h2 = l1 % 10000000000;
	l2_h2 = l2 % 10000000000;
	for (count = 93; count < 99; count++)
	{
		h1 = l1_h1 + l2_h1;
		h2 = l1_h2 + l2_h2;
		if (l1_h2 + l2_h2 > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}
		printf("%lu%lu", h1, h2);
		if (count != 98)
			printf(", ");
		l1_h1 = l2_h1;
		l1_h2 = l1_h2;
		l2_h1 = h1;
		l2_h2 = h2;
	}
	printf("\n");
	return (0);
}
