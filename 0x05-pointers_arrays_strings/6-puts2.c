#include "main.h"
/**
 * puts2 - The program prints every character of a string
 * starting with the first character
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int length = 0;
	int i = 0;
	char *a = str;
	int offset;

	while (*a != '\0')
	{
		a++;
		length++;
	}
	i = length - 1;
	for (offset = 0 ; offset <= i ; offset++)
	{
		if (offset % 2 == 0)
	{
		_putchar(str[offset]);
	}
	}
	_putchar('\n');
}

