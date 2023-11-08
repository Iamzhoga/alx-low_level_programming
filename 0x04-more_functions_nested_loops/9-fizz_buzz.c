#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: prints numbers
 *
 * Return: always 0
 */
int main(void)
{
	int j;

	for (j = 1; j <= 100; j++)
	{
		if (j % 15 == 0)
			printf("FizzBuzz");
		else if (j % 3 == 0)
			printf("Fizz");
		else if (j % 5 == 0)
			printf("Buzz");
		else
			printf("%i", j);
		if (j < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
