#include "main.h"
/**
 * _strpbrk - The program searches a string for any set of bytes
 * @s: input string
 * @accept: string to search for the first occurance
 * of the byte in s
 * Return: a pointer to the byte in s or NULL if
 * no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
		int a;

		while (*s)
		{
			for (a = 0; accept[a]; a++)
			{
			if (*s == accept[a])
			return (s);
			}
		s++;
		}

	return ('\0');
}
