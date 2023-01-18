#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - function that sums two numbers
  * @a: first parameter
  * @b: second parameter
  * Return: result
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - function that perform subtraction operation on two numbers
  * @a: first parameter
  * @b: second parameter
  * Return: result
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - function that performs multiplication operation on two numbers
  * @a: first parameter
  * @b: second parameter
  * Return: result
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - function that performs division operation
  * @a: first parameter
  * @b: second parameter
  * Return: result
  */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
  * op_mod - function that performs the modulo operation
  * @a: first value
  * @b: second value
  * Return: result
  */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
