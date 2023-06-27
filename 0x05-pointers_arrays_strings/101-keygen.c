#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PASSWORD_LENGTH 15

/**
 * main - Generates a random valid password for 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	int i;
	time_t t;

	srand((unsigned int)time(&t));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = rand() % ('~' - '!') + '!';
	}

	password[PASSWORD_LENGTH] = '\0';

	printf("%s\n", password);

	return (0);
}
