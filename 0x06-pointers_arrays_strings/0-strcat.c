#include "main.h"

/**
 * _strcat - Concatenates two strings
 *
 * @dest: String to be concatenated to
 * @src: String to be concatenated from
 *
 * Return: Pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*dest != '\0') /* Find the end of dest */
	{
		dest++
	}

	while (*src != '\0') /* Copy src to dest */
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0'; /* Add terminating null byte */
	return (ptr);
}
