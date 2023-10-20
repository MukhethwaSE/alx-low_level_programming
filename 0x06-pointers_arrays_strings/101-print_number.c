#include "main.h"

/**
 * print_number - The program prints an integer
 * @n: integer input
 *
 * Return: 0
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}

	if (i / 10 != 0)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + '0');
}
