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
		putchar(ch);
		ch++;
		{
                        if (ch == 'q' || ch == 'e')
                        return (1);
        }
	}
	putchar('\n');
	return (0);
}
