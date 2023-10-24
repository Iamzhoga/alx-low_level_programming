#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print summation of the two diagonals.
 * @a: source matrix
 * @size: size NxN of matrix
 *
 * Return: chessboard.
 */
void print_diagsums(int *a, int size)
{
	int i, j, sumdia1 = 0, sumdia2 = 0, step1, step2;

	for (i = 0; i <= (size - 1); i++)
	{
		step1 =  (size + 1) * i;
		sumdia1 = sumdia1 + *(a + step1);
	}

	for (j = 1; j <= size; j++)
	{
		step2 = (size - 1) * j;
		sumdia2 = sumdia2 + *(a + step2);
	}
	printf("%d, %d\n", sumdia1, sumdia2);
}
