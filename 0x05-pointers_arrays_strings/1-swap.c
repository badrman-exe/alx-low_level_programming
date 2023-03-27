#include "main.h"

/**
 * swap_int - swap the values of two variables
 * @a: pointer to first value
 * @b: pointer to first value
 */
void swap_int(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
