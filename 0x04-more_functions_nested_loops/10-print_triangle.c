#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: parameter for the triangle
 *
 * Return: nothing
 */
void print_triangle(int size)
{
int i, j;

if (size > 0)

for (i = size; i > 0; i--)
{
for (j = 1; j <= size; j++)
{
if (j >= i)
_putchar('#');
else
_printchar(' ');

_putchar('\n');
}
else
_putchar('\n');
}
