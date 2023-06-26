#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int digit;
	int started = 0;

	while (*s != '\0')
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			digit = *s - '0';
			result = result * 10 + digit;
			started = 1;
		}
		else if (started)
		{
			break;
		}

		s++;
	}

	return sign * result;
}
