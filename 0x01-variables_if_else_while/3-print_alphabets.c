#include <stdio.h>
/**
 * main - The program prints alphabets in lowercase and then in upper case
 *
 * Return: 0
 */
int main(void)
{
	char c = 'a';
	char d = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d <= 'z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
