#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first variable
 * @b: second variable
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
