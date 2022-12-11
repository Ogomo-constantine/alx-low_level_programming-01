#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints alphabet both lower and uppercase
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar (ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar (CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
