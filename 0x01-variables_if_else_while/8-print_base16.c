#include <stdio.h>

/**
 * main - The program prints all numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	for (int i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (int i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
