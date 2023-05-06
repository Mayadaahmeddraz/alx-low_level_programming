#include <stdio.h>

/**
 *main - Entery point
 *
 *Description: write the lowercase alphabets without q & c
 *
 *Return: 0 (success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)

	{
		if (ch != 'e' && ch != 'q')

		putchar(ch);
	}

	putchar('\n');
	return (0);
}
