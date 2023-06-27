#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 6

/**
 * generate_password - Generates a random password.
 * @password: The buffer to store the generated password.
 */
void generate_password(char *password)
{
	int i;

	srand(time(0)); /* Seed the random number generator with current time*/

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		/* Generate a random character between 'A' and 'z'*/
		password[i] = rand() % ('z' - 'A' + 1) + 'A';
	}

	password[PASSWORD_LENGTH] = '\0'; /*Null-terminate the password string*/
}

/**
 * main - entry point of the password generating program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char password[PASSWORD_LENGTH + 1];

	generate_password(password);
	printf("%s\n", password);

	return (0);
}
