#include <stdio.h>
/**
 * main - prints first 98 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int num;
	unsigned long n1 = 0, n2 = 1, n3;
	unsigned long a1, a2, a3, a4;
	unsigned long b1, b2;

	for (num = 0; num < 92; num++)
	{
		n3 = n1 + n2;
		printf("%lu, ", n3);
		n1 = n2;
		n2 = n3;
	}
	a1 = n1 / 10000000000;
	a2 = n1 % 10000000000;
	a3 = n2 / 10000000000;
	a4 = n2 % 10000000000;
	for (num = 93; num < 99; num++)
	{
		b1 = a1 + a3;
		b2 = a2 + a4;
		if ((a2 + a4) > 9999999999)
		{
			b1 += 1;
			b2 %= 10000000000;
		}
		printf("%lu%lu", b1, b2);
		if (num != 98)
			printf(", ");
		a1 = a3;
		a2 = a4;
		a3 = b1;
		a4 = b2;
	}
	printf("\n");
	return (0);
}
