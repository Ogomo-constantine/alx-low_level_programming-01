#include "main.h"
/**
 * infinite_add - function that add two numbers
 * @n1: 1st number to be added
 * @n2: 2nd no to be added
 * @r: store result
 * @size_r: the size of buffer
 * Return: retun a ponter to result, if result can be stored in buffer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
}

/**
 * add_strings - Adds number stored in two strings
 * @n1: string containing the 1st number
 * @n2: string containing the 2nd number
 * @r: the buffer to store the result
 * @r_index: the current index of the buffer
 * Return: if r can store sum - a pointer to the result
 * if r cannot store the sum - 0
 */

char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int num, tens = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n1; n1--; r_index++)
	{
		num = *(n1 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n2; n2--; r_index--)
	{
		num = (*n2 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
}
