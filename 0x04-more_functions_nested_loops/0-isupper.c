#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char c;

	c = 'A';
	if (_isupper(c))
		_putchar('1');
	else
		_putchar('0');

	c = 'a';
	if (_isupper(c))
		_putchar('1');
	else
		_putchar('0');

	_putchar('\n');

	return 0;
}
