#include "main.h"
/**
 * _strncat - Write a function that concatenates two strings. it will use at
 *            most n bytes from src
 *
 * @dest: This is the output  dest
 * @src: This is the input src
 * @n: This is the number bytes fro src
 *
 * Return: This is my return
 */
char* _strncat(char* dest, char* src, int n)
{
	int i, len1 = 0, len2 = 0;

	while (dest[len1] != '\0' || src[len2] != '\0')
	{
		if (dest[len1] != '\0')
			len1++;
		if (src[len2] != '\0')
			len2++;
	}
	for (i = 0; i < len2 && i<n; i++)
	{
		dest[len1] = src[i];
		len1++;
	}
	return (dest);
}
