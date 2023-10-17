#include "main.h"
/**
 * _puts - The program prints a string,
 * followed by a new line, to stdout
 * @str: string to be printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}

