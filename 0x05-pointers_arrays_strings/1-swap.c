#include "main.h"

/**
 *swap_int - function to swaps the values of two integers
 *
 *@a: input parameter 1
 *@b: input parameter 2
 *Return: 0 (success)
 */

void swap_int(int *a, int *b)

{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
