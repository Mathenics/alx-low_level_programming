#include "main.h"

/**
 * print_most_numbers - Prints numbers 0 to 9
 * Description: Prints the numbers except 2 and 4
 * Return: Numbers from 0 to 9
 */

void print_most_numbers(void)
{

	int e = 0;

	for (; e <= 9; e++)
	{
	if (e == 2 || e == 4)
	{
	continue;
	}
	else
	{
	_putchar(e + '0');
	}
	}
	_putchar('\n');
}
