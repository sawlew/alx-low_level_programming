#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: first target string
 * @src: second target string
 * Return: concatenated strings
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
