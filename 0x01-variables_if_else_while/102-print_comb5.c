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
	int i, j, x, y;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			y = j + 1;
			for (x = i; x <= 57; x++)
			{
				for (; y <= 57; y++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(x);
					putchar(y);
					if (i == 57 && j == 56 && x == 57 && y == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				y = 48;
			}
		}
	}
	putchar('\n');
	return (0);
}
