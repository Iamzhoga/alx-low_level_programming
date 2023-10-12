#include "main.h"
#include <stdio.h>

/**
 * print_aplhabet - Check description
 * Description: It prints the alphabet, in lowercase with a new line
 * Return: Nothing
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
