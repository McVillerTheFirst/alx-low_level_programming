#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 *             flipped to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int sor = n ^ m, count = 0;

	while (sor > 0)
	{
		count += (sor & 1);
		sor >>= 1;
	}

	return (count);
}
