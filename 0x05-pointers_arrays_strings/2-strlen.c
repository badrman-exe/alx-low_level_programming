#include "main.h"

/**
 * _strlen - retrun the length of a string
 * @s: string to evaluate
 * 
 * return: the length of the string
 */
int _strlen(char* s)
{
	int i=0;

	while (s[i] != '\0')
		i++;
	return (i);
}
