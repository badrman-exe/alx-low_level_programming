#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalizes most of the words in a string.
 * @s: analized string.
 *
 * Return: String with all words capitalized.
 */
int i = 0;
void _puts_recursion(char* s)
{
	if (s[i] != '\0')
	{
		putchar(s[i]);
		i++;
		_puts_recursion(s);
	}
	if (*s == 0)
	{
		putchar('\n');
	}
	
}
