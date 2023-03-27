#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string parameter
 *
 * Return: integer
 */
int _strlen(char *character)
{
	int count = 0;

	while (character[count] != '\0')
		count++;

	return (count);
}
