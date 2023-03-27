#include "main.h"
/**
 * swap_int - swaps integers
 * @a: ptr to integer number 1
 * @b: ptr to integer number 2
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;

	*b = *a - *b;

	*a = *a - *b;
}
