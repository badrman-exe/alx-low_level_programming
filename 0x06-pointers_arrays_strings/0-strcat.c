#include "main.h"
/**
 *_strcat - Write a function that concatenates two strings.
 *
 *@dest: This is the output dest
 *@src: This is the input source
 *
 * Return: This return to dest, that concatenates two strings
 */
char* _strcat(char* dest, char* src)
{
	int i, len1 = 0, len2 = 0;

	while (dest[len1] != '\0' || src[len2] != '\0')
	{
		if (dest[len1] != '\0')
			len1++;
		if (src[len2] != '\0')
			len2++;
	}
	for (i = 0; i < len2; i++)
	{
		dest[len1] = src[i];
		len1++;
	}
	return (dest);
}
