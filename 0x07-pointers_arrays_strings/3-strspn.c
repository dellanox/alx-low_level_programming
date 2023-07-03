#include "main.h"
#include <string.h>

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string
 * @accept: Pointer to the string of accepted characters
 *
 * Return: Number of bytes in the initial segment of s consisting only of
 * bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s && strchr(accept, *s))
	{
		count++;
		s++;
	}

	return (count);
}
