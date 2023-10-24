#include "main.h"
/**
 * _strchr - The program locates a character in a string
 * @s: input string
 * @c: input character to locate
 * Return: 0.
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
