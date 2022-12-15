#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: none
 */
void more_numbers(void)
{
	char i, j;

	while (i <= '9')
	{
		for (j  = '0'; j <= '14', j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
