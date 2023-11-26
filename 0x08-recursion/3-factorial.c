#include "main.h"
#include "_putchar.c"

/**
 * factorial - function to produce factorial of a number
 * @n: number to be considered
 *
 * Return: success
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
