#include "main.h"
/**
 * leet - The program encodes a string into 1337
 * @n: input string
 * Return: n
 */
char *leet(char *n)
{
	int a, b;
	char s_1[] = "aAeEoOtTlL";
	char s_2[] = "4433007711";

	for (a = 0; n[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (n[a] == s_1[b])
			{
				n[a] = s_2[b];
			}
		}
	}
	return (n);
}
