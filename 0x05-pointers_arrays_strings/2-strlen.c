#include "main.h"

/**
 * _strlen - computes the length of a string
 * @s: the said string
 * Return: length
 */

int _strlen(char *s)
{
	int count, res;
	len = 0;

	for (count = 0; s[count] != '\0'; count++)
		len++;

	return (len);
}
