#include "main.h"

/**
 * puts2 - prints every character of a string
 * @str: target string
 */

void puts2(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s++)
	if (s % 2 == 0)
		putchar(str[s]);
	putchar('\n');
}
