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

	while (c <= 'z')
	{
		putchar(c);
		ch++;
	}
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar ('\n');
	return (0);
}
