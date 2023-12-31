#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The program asigns a random number to n each time it executes
 * and prints whether the number stored in the variable n is positive,
 * negative or zero.
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
