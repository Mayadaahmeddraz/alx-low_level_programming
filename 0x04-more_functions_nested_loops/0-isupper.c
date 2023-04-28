#include "main.h"

/**
 *_isupper - function to check alphabet is uppercase
 *
 * @c: input for alphabets
 *
 *Return: 1 if its upper case 0 if else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
