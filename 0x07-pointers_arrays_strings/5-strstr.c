#include "main.h"
/**
 * _strstr - The program locates a substring
 * @haystack: input string to search
 * @needle: substring needle to locate
 * Return: pointer to beginning of located substring
 * or NULL if substring not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
	}

	return (0);
}
