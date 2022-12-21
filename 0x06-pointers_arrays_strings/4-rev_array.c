#include "main.h"

/**
 * reverse_array - reverses the content of an arraay of integers
 * @a: target array
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, b;

	for (i = 0; (i < (n - 1) / 2); i++)
	{
		b = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = b;
	}
}
