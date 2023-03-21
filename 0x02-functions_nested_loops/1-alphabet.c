#include "main.h"
#include <stdio.h>
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
