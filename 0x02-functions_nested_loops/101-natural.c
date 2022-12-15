#include <stdio.h>
/**
 * main - prints sum of multiple numbers of 3 and 5 below 1024
 * parameters
 * Return: Always 0
 */
int main(void)
{
	int n, sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
