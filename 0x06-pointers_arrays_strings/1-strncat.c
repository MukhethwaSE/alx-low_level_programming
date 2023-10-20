#include "main.h"
/**
 * _strncat - The program concatenate two strings
 * using at most n bytes from src
 * @dest: input string
 * @src: input string
 * @n: input bytes to use from src
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
	dest[a] = src[b];
	a++;
	b++;
	}
	dest[a] = '\0';
	return (dest);
}
