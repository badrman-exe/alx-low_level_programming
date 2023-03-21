#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _abs - a function that computes the absolute value of an integer
 * @ab: integer input
 * Return: absolute value of ab
 */
int _abs(int n)
{
	if (n < 0)
	{
		return abs(n);
	}
	else
		return (n);
}
