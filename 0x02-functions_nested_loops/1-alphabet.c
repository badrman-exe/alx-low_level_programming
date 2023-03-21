#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char let = 'a';

	while (let <= 'z')
	{
		putchar(let);
		let++;
	}
	putchar('\n');
}
