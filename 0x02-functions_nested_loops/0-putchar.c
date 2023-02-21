#include "main.h"

/**
 * main - prints _putchar
 *
 * Return: ALways 0 (Success)
 *
 */
int main(void)
{
	int letters[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int size, cnt;

	size = sizeof(letters) / sizeof(int);
	for (cnt = 0; cnt < size; cnt++)
	{
		_putchar(letters[cnt]);
	}
	_putchar('\n');
	return (0);

}
