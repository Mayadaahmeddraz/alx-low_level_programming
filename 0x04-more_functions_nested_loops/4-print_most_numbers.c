#include "main.h"

/**
 *print_most_numbers - print nums exept 2, 4
 *
 *Return: 0 always
 */

void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a == 2 || a == 4)
			continue;
		_putchar(a + 48);
	}
	_putchar('\n');

	return (0);
}
