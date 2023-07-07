#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to use from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	/* Find the length of the destination string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	/* Append the source string to the destination string */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len++] = src[i];
	}
	dest[dest_len] = '\0'; /* Add the terminating null byte */

	return (dest);
}
