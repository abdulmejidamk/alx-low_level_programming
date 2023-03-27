#include "main.h"
/**
 * swap_int - swaps integers
 * @a: pointer to integer number 1
 * @b: pointer to integer number 2
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b; 
*b = temp;
}
