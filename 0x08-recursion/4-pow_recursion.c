#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _pow_recursion - print result of x raised to power of y
 * @x:  base number
 * @y: power number
 *
 * Return: power success
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (0);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
