#include "main.h"

/**
 * _isuper - checks the uppercase character
 * @c: the number to be checked
 * Return: 1 for uppercase character, 0 otherwise
 */

int _isupper(int c)

{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}