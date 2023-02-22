#include "main.h"
/**
 * print_last_digit - Prints last digit of number
 * @x: number to be checked
 * Return: Last digit of number value
 */

int print_last_digit(int x)
{

	int last;

	last = x % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
