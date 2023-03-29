#include "main.h"
/**
 * _strcat - concats strings
 * @destination: string pointer 1
 * @source: string pointer 2
 * Return: dest
 */

char* my_strcat(char* destination, const char* source)
{
char* ptr = destination + strlen(destination);
while (*source != '\0')
{
*ptr++ = *source++;
}
*ptr = '\0';
return destination;
}
