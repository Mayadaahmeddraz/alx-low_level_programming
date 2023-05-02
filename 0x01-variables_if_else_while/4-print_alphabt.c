#include <stdio.h>

/**
 *main - Entery point
 *
 *Description: write the lowercase alphabets without q & c
 *
 *Return: 1 or 0 (not success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		{
		if (ch == 'e' || ch == 'q')
			return (1);
		}
			else
		putchar(ch);
		ch++;}
	}
	putchar('\n');
	return (0);
}
