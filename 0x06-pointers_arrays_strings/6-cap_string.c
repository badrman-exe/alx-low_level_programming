#include "main.h"
/**
 * cap_string - capitalizes most of the words in a string.
 * @s: analized string.
 *
 * Return: String with all words capitalized.
 */

char *cap_string(char *s)
{
	int i, j;
	char arr[] = { 32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125 };

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
			{
				s[i] -= 32;
			}
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (arr[j] == s[i-1])
					{
						s[i] -= 32;
					}
				}
			}
		}
	}
	return (s);
}
