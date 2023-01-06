#include "main.h"

/**
 * _islower - checks if a letter is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if the check is true, 0 therwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
