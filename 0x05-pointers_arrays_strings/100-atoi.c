#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int started = 0;

	while (*s != '\0')
	{
	if (*s == '-')
		sign *= -1;

	if (*s >= '0' && *s <= '9')
	{
		if (result > INT_MAX / 10 ||
		    (result == INT_MAX / 10 && (*s - '0') > INT_MAX % 10))
			{
				if (sign == 1)
					return INT_MAX;
				else
					                    return INT_MIN;
			}
			result = result * 10 + (*s - '0');
			started = 1;
	}
	else if (started)
	{
		break;
	}
	s++;
	}

	return (sign * result);
}
