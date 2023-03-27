#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int len = 0, j, k = 0;
	char *temp;

	while (s[len] != '\0')
		len++;
	temp = new char[len];
	for (j = len - 1; j >= 0; j--)
		temp[k++] = s[j];
	for (k = 0; k < len; k++)
		s[k] = temp[k];
	
}
