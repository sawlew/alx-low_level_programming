#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords 
 *
 * Return: Always 0
 */

int main(void)
{
	char pass[84];
	int index = 0, sum = 0, a, b;

	srand(time(0));

	while (sum< 2772)
	{
		pass[index] = 33 + rand() % 94;
		sum += pass[index++];
	}
	pass[index] = '\0';

	if (sum != 2772)
	{
		a = (sum - 2772) / 2;
		b = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			a++;

			for (index = 0; pass[index]; index++)
			{
				if (pass[index] >= (33 + a))
				{
					pass[index] -= a;
					break;
				}
			}
			for (index = 0; pass[index]; index++)
			{
				if (pass[index] >= (33 + b))
				{
					pass[index] -= b;
					break;
				}
			}
	}

	printf("%s", pass);

	return (0);
}
