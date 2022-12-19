#include "main.h"

/**
 * _puts - a function that prints a string to the stdout
 * @str: strings to print
 *
 * Return: the string
 */

void _puts(char *str)
{
while (*str)
_putchar(*str++);

_putchar('\n');
}
