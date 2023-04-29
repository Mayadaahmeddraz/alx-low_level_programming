#include "main.h"

/**
 *print_triangle - prints triangle
 *
 *@size: size of triangle
 *
 *Return: 0 always (success)
 */

void print_triangle(int size)
{
	int high, base;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (high = 1; high <= size; high++)
		{
			for (base = 1; base <= size; base++)
			{
				if ((high + base) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
