#include "main.h"

/**
 * print_line - Entry point to function.
 * Description: draws a straight line in the terminal.
 * @n: number of printing times
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
