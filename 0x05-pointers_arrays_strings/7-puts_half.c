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
	if (len % 2 == 0)
	{
		for (i = (len / 2) + 1; i < len; i++);
			putchar(str[i]);
	}
	else
	{
		for (i = (len - 1) / 2; i < len; i++)
			putchar(str[i]);
	}

	putchar('\n');
}
