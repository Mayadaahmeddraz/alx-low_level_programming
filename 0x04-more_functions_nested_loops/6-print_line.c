#include "main.h"

/**
 *print_line - print line of _ .
 *@n: input the number of _
 */

void print_line(int n)
{
	int chr;

	if (n <= 0)
		putchar('\n');
	else
	{
		for (chr = 1; chr <= n; chr++)
			_putchar('_');
		_putchar('\n');
	}
}
