#include "holberton.h"

/**
 * _puts - Prints the entire string
 * @str: String to be printed
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
