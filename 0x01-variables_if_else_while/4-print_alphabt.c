#include <stdio.h>

/**
 *main - Entery point
 *
 *Description: write the lowercase alphabets without q & c
 *
 *Return: 1 (not success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

			if (ch == 'q' || ch == 'e')

			return (1);
}
