#include "main.h"

/**
 *puts2 -  a function that prints every other character of a string
 *
 *@str: input parameter
 *
 *Return: null
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	putchar ('\n');
}
