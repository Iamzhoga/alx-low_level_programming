#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: character to check
 * Description:  This functions checks for upper case letters
 * Return: 0 or 1
 */
int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
