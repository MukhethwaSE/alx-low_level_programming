#include "main.h"
/**
 * _strspn - The program gets the length of a prifix substring
 * @s: input string
 * @accept: bytes that make up the length of a prifix substring
 * Return: number of bytes in s from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
