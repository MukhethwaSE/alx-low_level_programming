#include "main.h"
/**
 * _strncpy - The program copies a string
 * @dest: input string
 * @src: input string
 * @n: input bytes to use from src
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
