#include "main.h"
/**
 * print_rev - The program prints a string in reverse
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int length = 0;
	int offset;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (offset = length; offset > 0; offset--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

