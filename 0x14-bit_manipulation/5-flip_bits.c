#include "main.h"

/**
 * flip_bits - returns number of bits needed
 * to flipped to get from one numbe to another.
 * @a: first number.
 * @b: second number.
 *
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int a, unsigned long int b)
{
	unsigned int bits_number;

	for (bits_number = 0; a || b; a >>= 1, b >>= 1)
	{
		if ((a & 1) != (b & 1))
			bits_number++;
	}

	return (bits_number);
}
