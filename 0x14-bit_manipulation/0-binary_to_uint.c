#include "main.h"

/**
 * binary_to_uint - converts a binary num to
 * unsigned int.
 * @n: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *n)
{
	unsigned int a;
	int length, b_two;

	if (!n)
		return (0);

	a = 0;

	for (length = 0; b[length] != '\0'; length++)
		;

	for (length--, b_two = 1; length >= 0; length--, b_two *= 2)
	{
		if (n[length] != '0' && n[length] != '1')
		{
			return (0);
		}

		if (n[length] & 1)
		{
			a += b_two;
		}
	}

	return (a);
}
