#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the target pointer to convert
 *
 * Return: integer or 0 if no numbers in string
 */

int _atoi(char *s)
{
	int i = 0;
	unsigned int a = 0;
	int min = 1;
	int res = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			min *= -1;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			res = 1;
			a = (a * 10) + (s[i] - '0');
			i++;
		}
		if (res == 1)
		{
			break;
		}
		i++;
	}
	a *= min;
	return (a);
}

