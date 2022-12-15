#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int num;
	unsigned long n1 = 0, n2 = 1, n3;

	for (num = 0; num < 50; num++)
	{
		n3 = n1 + n2;
		printf("%lu", n3);
		n1 = n2;
		n2 = n3;

		if (num == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
