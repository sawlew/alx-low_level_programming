#include "main.h"

/**
 * string_toupper - changes all lowercade letters of a string to uppercase
 * @s: target string
 * Return: void
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}
