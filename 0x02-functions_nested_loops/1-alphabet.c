#inlcude <stdio.h>

/**
 * main : check the code
 *
 * Description : a function that prints the alphabet, in lowercase, followed by a new line
 *
 * Return : Nothing
 */

void print_alphabet(void)
{
	char i;

	for (i='a'; i <='z'; i++)
		_putchar(i);
	_putchar('\n');
}
