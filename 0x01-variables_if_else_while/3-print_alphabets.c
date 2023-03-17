#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'a', upper = 'A';

	while (alpha != '{')
	{
		putchar(alpha);
		alpha++;
	}
	while (upper != '[')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
