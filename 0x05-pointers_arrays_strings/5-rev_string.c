#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int len = 0, j, k = 0;
	char temp[500];

	while (s[len] != '\0')
		len++;
	for (j = len - 1; j >= 0; j--)
		temp[k++] = s[j];
	for (k = 0; k < len; k++)
		s[k] = temp[k];
	
}
