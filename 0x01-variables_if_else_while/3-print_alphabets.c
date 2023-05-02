#include <stdio.h>

/**
 *main - entery point
 *
 *Description: print the uppercase and lowercase alphabets
 *
 *Return: 0 (success)
 */

int main(void)
{
	char c = 'a';
	char ch = 'A';

	while (ch <= 'Z' && c <= 'z')
	{
		putchar(ch);
		putchar(c);
		ch++;
	}
	putchar ('\n');
	return (0);
}
