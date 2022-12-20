#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid password for 101-crackme program
 * Return: 0 on success
 */
int main(void)
{
	srand(time(NULL));

	char password[PASSWORD_LENGTH + 1];

	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = rand() % 26 + 'a';
	}
	password[PASSWORD_LENGTH] = '\0';

	printf("Generated password: %s\n", password);

	return (0);
}
