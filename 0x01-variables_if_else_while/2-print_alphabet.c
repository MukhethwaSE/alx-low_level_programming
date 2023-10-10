#include <stdio.h>
/**
 *  main - The program prints the alphabets in lowercase
 *  followed by a new line
 *
 *  Return: 0
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);

}
