#include "main.h"

/**
 * flip_bits - Returns the number of bits to flip to get
 * from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;
	unsigned int index;

	for (index = 0; index < sizeof(xor_result) * 8; index++)
	{
		if (xor_result >> index == 0)
			break;
		count += (xor_result >> index) & 1;
	}

	return (count);
}
