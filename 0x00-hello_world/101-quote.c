#include <unistd.h>

/**
 *main - Entry point
 *
 *Discription: print write function write (int, const void, buf size of -t num)
 *Return: 1 (not success)
 */

int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, msg, 59);
	return (1);
}
