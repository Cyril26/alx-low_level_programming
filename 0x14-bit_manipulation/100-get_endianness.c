#include "main.h"

/**
 * get_endianness - checks endianness
 *
 * Return: 0 if big endian, 1 if little.
 */

int get_endianness(void)
{
	unsigned int a;
	char *n;

	a = 1;
	n = (char *) &a;

	return ((int)*n);
}
