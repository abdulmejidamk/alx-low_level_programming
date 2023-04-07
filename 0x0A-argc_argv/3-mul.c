#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - main function
 * @argc: number of command lines
 * @argv: array of string of command lines
 * Return: 1
 */
int main(int argc, char const *argv[])
{
	int i, mul = 1;

	if (argc > 1 && argc != 2)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else if (argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("Error \n");
		return (1);
	}
	return (0);
}
