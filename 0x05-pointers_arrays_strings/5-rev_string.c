#include "main.h"

/**
 *rev_string - a function that reverses a string
 *
 *@s: input parameter
 *
 *Return:null
 */

void rev_string(char *s)
{
	int m, i;
	char temp;

	/*find string length without null char*/
	for (m = 0; s[m] != '\0'; ++1)
		;
	/*swap the string by looping to half the string*/
	for (i = 0; i < m / 2; i++)

	temp = s[i];
	s[i] = s[m - 1 - i]; /*-1 because the array starts from 0*/
	s[m - 1 - i] = temp;
}
