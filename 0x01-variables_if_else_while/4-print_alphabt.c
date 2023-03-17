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
	char lower = 'a';

	while (lower != '{')
	{
		if (lower != 'q' || lower != 'e')
		{
			putchar(lower);
		}
		lower++;
	}
	return (0);
}
