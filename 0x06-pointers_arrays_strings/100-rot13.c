#include "main.h"
#include <stdio.h>

/**
 * rot13 - The program encodes a string using rot13
 * @s: input string
 *
 * Return: encoded string
 */

char *rot13(char *s)
{
	int a;
	int b;
	char s_1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s_2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (s[a] == s_1[b])
			{
				s[a] = s_2[b];
				break;
			}
		}
	}
	return (s);
}
