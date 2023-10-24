#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - The program prints the sum of two diagonals
 * of a square matrix ot intergers
 * @a: input
 * @size: input size of matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum_1, sum_2, x;

	sum_1 = 0;
	sum_2 = 0;

	for (x = 0; x < size; x++)
	{
		sum_1 = sum_1 + a[x * size + x];
	}

	for (x = size - 1; x >= 0; x--)
	{
		sum_2 += a[x * size + (size - x - 1)];
	}

	printf("%d, %d\n", sum_1, sum_2);
}
