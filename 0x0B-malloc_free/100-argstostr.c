#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The argument count.
 * @av: The argument vector.
 *
 * Return: Pointer to the concatenated string,
 *         or NULL if ac is 0 or av is NULL, or if memory allocation fails.
 */
char *argstostr(int ac, char **av)
{
	char *concatenated;
	int i, j, length = 0, total_length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of all arguments and newlines */
	for (i = 0; i < ac; i++)
	{
		length = 0;
		while (av[i][length] != '\0')
		{
			length++;
			total_length++;
		}
		total_length++; /* For newline character */
	}

	concatenated = malloc(sizeof(char) * (total_length + 1));
	if (concatenated == NULL)
		return (NULL);

	/* Concatenate the arguments */
	j = 0;
	for (i = 0; i < ac; i++)
	{
		length = 0;
		while (av[i][length] != '\0')
		{
			concatenated[j] = av[i][length];
			j++;
			length++;
		}
		concatenated[j] = '\n';
		j++;
	}

	concatenated[j] = '\0'; /* Add null terminator */

	return (concatenated);
}
