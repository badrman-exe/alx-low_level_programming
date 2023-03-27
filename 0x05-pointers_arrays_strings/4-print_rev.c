#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char* s)
{
	int i=0,j;

	while (s[i] != '\0')
		i++;
	for (j = i-1; j >= 0; j--)
	{
		putchar(s[j]);
	}
	putchar('\n');
}
