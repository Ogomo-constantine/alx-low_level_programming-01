#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

/*
 * main - add one line to the code to print a[2] = 98
 * Remember: - you are  nit allowed to use a
 * - you are not supposed to modify p
 * - you can only use one statement
 * - you are not allowed to code anything else than this line of code
 */
*(p + 5) = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}

