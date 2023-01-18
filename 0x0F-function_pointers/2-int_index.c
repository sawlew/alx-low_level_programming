#include "function_pointers.h"

/**
  * int_index - returns the index of the first element when cmp return is not 0
  * @array: list of elements
  * @size: size of elements in the array
  * @cmp: pointer to the function to be used to compare values
  * Return: search value and -1 if no matches
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
