#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Succes)
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
