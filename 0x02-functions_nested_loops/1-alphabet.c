#include "main.h"
/**
 * main - prints the alphabets in lowercase.
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);

	_putchar('\n');

}
