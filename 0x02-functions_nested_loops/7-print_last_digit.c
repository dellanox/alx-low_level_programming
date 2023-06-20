/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = labs(n);

	last_digit = n % 10;
	_putchar(last_digit + '0');

	return last_digit;
}
