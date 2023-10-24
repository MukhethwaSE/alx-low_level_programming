#include "main.h"
/**
 * print_chessboard - The program prints the chessboard
 * @a: size of chessboard
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int b;
	int c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
			_putchar(a[b][c]);
		_putchar('\n');
	}
}
