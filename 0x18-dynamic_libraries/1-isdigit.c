#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: the character to be tested
 * Return: returns 1 if the character is a digit and 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
