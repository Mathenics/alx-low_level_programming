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
	int _pow = pow(x, y);

	if (y < 0)
	{
		return (-1);
	}

		return (_pow);
}
