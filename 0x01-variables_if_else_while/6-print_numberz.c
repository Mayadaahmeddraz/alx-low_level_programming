#include <stdio.h>

/**
 *main - prints all single digit numbers of base 10 starting from 0
 *
 *Return: 0 (success)
 */

int main(void)
{
	int d;

	for (d = 0; d < 10; d++)
	{
		putchar(d + '0');
	}
	putchar('\n');
	return (0);
}
