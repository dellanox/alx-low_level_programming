#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: The string to print.
 */
void puts_half(char *str)
{
	int length = 0;
	int i, start;

	while (str[length] != '\0')
		length++;

	start = length % 2 == 0 ? length / 2 : (length + 1) / 2;

	for (i = start; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}
