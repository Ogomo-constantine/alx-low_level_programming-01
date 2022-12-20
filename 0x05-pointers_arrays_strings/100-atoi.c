#include "main.h"
/**
 * _atoi - function that converts string to integer
 * @s: pointer to character string
 * Return: void
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (isspace(s[i]))
	{
	i++;
	}
	if (s[i] == '+')
	{
		i++;
	}
	else if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (isdigit(s[i]))
	{
		int digit = s[i] - '0';

		if (result > INT_MAX / 10 || (result == INT_MAX /
					10 && digit > INT_MAX % 10))
		{
			return (sign == 1 ? INT_MAX : INT_MIN);
		}
		result = result * 10 + digit;
		i++;
	}

	return (sign * result);
}
