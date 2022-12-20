#include "main.h"

/**
 * _isupper - checks the uppercase character
 * @x: the number to be checked
 * Return: 1 for uppercase character, 0 otherwise
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
