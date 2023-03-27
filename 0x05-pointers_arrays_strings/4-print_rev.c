#include "main.h"
/**
 * print_rev - prints the reverse of the string
 * @str: pointer to the string
 *
 * Return: void
 */
void print_rev(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	while (i > 0)
		_putchar(str[--i]);
	_putchar('\n');
}
