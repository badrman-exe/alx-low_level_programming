#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * jack_bauer - function that prints every minute of the day, 24 hour clock
 * h = hour, m = minutes
 * / 10 allows second digit to rotate
 * for loop breaks before passing 24:00
 * Return: 24 hour clock line by line
 */
void jack_bauer(void)
{
	int i, j, k, h;
	for (i = 0; i <= 2; i++)
	{
		for (j = 0;j<=9 ; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (h = 0; h <= 9; h++)
				{
					printf("%d%d:%d%d\n", i, j, k, h);
					if (i == 2)
					{
						if (j == 3)
						{
							if (k == 5)
							{
								if (h == 9)
									return;
							}
						}
					}
				}
			}
		}
	}
}
