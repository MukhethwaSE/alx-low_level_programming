#include "main.h"
#include <unistd.h>
/**
 * _putchar - The program writes the character c to stdout.
 *
 * Return: 1
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

