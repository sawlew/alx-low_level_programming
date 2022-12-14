#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: the number to check.
 *
 * Return: value of the last digit.
 */
int print_last_digit(int n)
{
	int number = n % 10;

	if (number < 0)
		number *= -1;

	_putchar(number + '0');

	return (number);
}
