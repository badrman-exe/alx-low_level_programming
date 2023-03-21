#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	char let;
	int i;

	for (i = 0; i < 10; i++)
	{
		let = 'a';
		while (let <= 'z')
		{
			putchar(let);
			let++;
		}
		putchar('\n');
	}
}
