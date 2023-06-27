#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_PASSWORD_LENGTH 10
/**
 *generatePassword -  password program
 *
 *Return: returns a pawwrord
 */
char *generatePassword(void)
{
	static const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	int length = rand() % MAX_PASSWORD_LENGTH + 1;
	char *password = malloc((length + 1) * sizeof(char));

	for (int i = 0; i < length; i++)
	{
		int index = rand() % (sizeof(charset) - 1);
		password[i] = charset[index];
	}

	password[length] = '\0';
	return (password);
}

/**
 *main- entry point of password program
 *
 *Return: Always 0(Success)
 */
int main(void)
{
	srand(time(NULL));
		char *password = generatePassword();

		printf("%s", password);
		free(password);

		return (0);
}
