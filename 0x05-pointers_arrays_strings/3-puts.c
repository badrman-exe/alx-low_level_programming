#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 */
void _puts(char* str)
{
	int i=0,j;

	while (str[i] != '\0')
		i++;
	for (j = 0; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
