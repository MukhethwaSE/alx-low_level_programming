#include <stdio.h>

/**
 * main - The program prints all possible different
 * combinations of three digits
 * Return: 0.
 */
int main(void)
{
	int i, j, l;

	for (i = 48; i < 58; i++)
	{
		for (j = 49; j < 58; j++)
		{
			for (l = 50; l < 58; l++)
			{
				if (l > j && j > i)
				{
					putchar(i);
					putchar(j);
					putchar(l);
					if (i != 55 || j != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
