#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: 0-9, excluding 2 and 4, followed by new line
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 51 || i == 53)
			continue;
		else
			_putchar(i);
	}
	_putchar('\n');
}
