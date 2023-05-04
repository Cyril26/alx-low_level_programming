#include "main.h"

/**
 * set_bit - sets value of a bit to 1.
 * at a given index.
 * @a: pointer of unsigned long int.
 * @idx: index of bit.
 *
 * Return: 1 if success, -1 if failed
 */

int set_bit(unsigned long int *a, unsigned int idx)
{
	unsigned int n;

	if (idx > 63)
		return (-1);

	n = 1 << indx;
	*a = (*a | n);

	return (1);
}
