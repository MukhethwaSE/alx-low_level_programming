#include "main.h"
/**
 *_memcpy - The program copies memory area
 *@dest: memory where n bytes are copied to
 *@src: memory where n bytes are copied from
 *@n: number of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int a = n;

	for (; r < a; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
