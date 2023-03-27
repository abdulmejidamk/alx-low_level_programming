#include "main.h"
/**
 * puts2 -prints every other character
 * @string: string parameter
 *
 * Return: void
 */
void puts2(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(string[i]);
	}
	_putchar('\n');
}
