#include "main.h"

/**
 * print_square - prints a square of followed by new line
 * @size: size of the square
 *
 * Return: void
 */


void print_square(int size)
{
	int j, k;

	if (size <= 0)
		_putchar('\n');

	for (j = 0; j < size; j++)
	{
		for (k = 0; k < (size); k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
