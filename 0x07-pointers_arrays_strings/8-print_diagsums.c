#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: The matrix of integers.
 * @size: The size of the matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a += size;
	}
	a -= size;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a -= size;
	}
	printf("%i, %i\n", sum1, sum2);
}
