#include "main.h"

/**
 * more_numbers - numbers multiplication table
 * Return: no return
 */

void more_numbers(void)
{

int k, m;
	for (k = 1; k <= 10; k++)
	{
		for (m = 0; m <= 14; m++)
		{
			if (m >= 10)
			_putchar('1');
			_putchar(m % 10 + '0');
		}
			_putchar('\n');
		}
}
