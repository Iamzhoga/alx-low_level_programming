#include "main.h"

/**
 * print numbers - Entry point to function
 * @n: number of printing times
 *
 * Return: Always zero
 */

void print_line(int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		_putchar('_');
	}
	_putchar('\n');

}
