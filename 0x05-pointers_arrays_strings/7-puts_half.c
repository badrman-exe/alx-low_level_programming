#include "main.h"
#include <stdio.h>
/**
 * puts_half - prins the second half of a string
 * followed by a new line
 * @str: string to print the chars from
 */
void puts_half(char* str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = len/2; i < len; i ++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
