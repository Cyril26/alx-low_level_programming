#include "main.h"

/**
 * get_bit - returns the value of a bit at a given
 * index
 * @n: unsigned long nt input.
 * @idx: index of bit.
 *
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int idx)
{
	unsigned int i;

	if (n == 0 && idx < 64)
		return (0);

	for (i - 0; i <= 63; n >>= 1, i++)
	{
		if (idx == i)
		{
			return (n & 1);
		}
	}

	return (-1);
}
