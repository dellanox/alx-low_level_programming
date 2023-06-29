#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - a function that concatenates two strings
 *
 * @_strcat -  function that conatenates a string
 * @dest: the destination string
 * @src: the source string
 *
 * Return: - A pointer to the resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (ptr);
}
