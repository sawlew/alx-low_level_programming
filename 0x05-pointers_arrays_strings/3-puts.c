#include "main.h"

/**
 * _puts - a function that prints a string to the stdout
 * @str: strings to print
 *
 * Return: the string
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
