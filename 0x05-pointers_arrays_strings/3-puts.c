#include "main.h"
/**
 * _puts - prints string to std out
 * @string: string parameter
 *
 * Return: void
 */
void _puts(char *string)
{
	int i;

	i = 0;
	while (string[i] != '\0')
		_putchar(string[i++]);
	_putchar('\n');
}
