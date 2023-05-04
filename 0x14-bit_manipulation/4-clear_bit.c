#include "main.h"

/**
 * clear_bit - sets value of a bit to 0.
 * at a given base
 * @m: pointer of unsigned long int
 * @idx: index of bit
 *
 * Return: 1 if success, -1 otherwise.
 */

int clear_bit(unsigned long int *m, unsigned int idx)
{
	unsigned int n;

	if (idx > 63)
		return (-1);

	n = 1 << idx;

	if (*m & n)
		*m ^= n;

	return (1);
}
