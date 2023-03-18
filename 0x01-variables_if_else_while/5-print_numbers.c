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
	int num = -1;

	while (num < 9)
	{
		num++;
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}
