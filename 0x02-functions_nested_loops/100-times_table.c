#include "main.h"
/**
 * print_times_table - prints the times table
 * parameter
 * @n: The input number
 * Return: nothing
 */
void print_times_table(int n)
{
int num1, num2, result;
if (n >= 0 && n <= 15)
{
for (num1 = 0; num1 <= n; num1++)
{
_putchar('0');

for (num2 = 1; num2 <= n; num2++)
{
_putchar(',');
_putchar(' ');
result = num1 * num2;
if (result <= 99)
_putchar(' ');

if (result <= 9)
_putchar(' ');
if (result >= 100)
{
_putchar((result / 100) + '0');
_putchar((result / 10) % 10 + '0');
}
else if (result <= 99 && result >= 10)
{
_putchar((result / 10) + '0');
}
_putchar((result % 10) + '0');
}
_putchar('\n');
}
}
}
