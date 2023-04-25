#include<stdio.h>
/**
 * main - A programme to print size function
 *
 * Return: 0(success)
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %dbyte(s)\n", sizeof(float));
	return (0);
}