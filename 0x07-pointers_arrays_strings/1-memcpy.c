#include "main.h"

/**
 * _memcpy - function copies bytes from memory area
 * @n: function copies
 * @src: bytes from memory area
 * @dest: destiination
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	dest[i] = src[i];
	i++;
	}

	return (dest);
}
