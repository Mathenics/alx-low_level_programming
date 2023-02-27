#include "main.h"

/**
 * print_numbers - It print numbers from 0 to 9
 * Return: The number 0 to 9
 */

void print_numbers(void)

{
	int b;

	for (b = 0; b <= 9; b++)
	{
	_putchar(b + '0');
	}
	_putchar("\n");
}
