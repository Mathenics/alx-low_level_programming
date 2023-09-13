#include "main.h"

/**
 * print_alphabet_x10 - Produce aphabets 10 times
 * Return: void
 */

void print_alphabet_x10(void)

{
	char x;
	int c = 0;

	while (c <= 9)
	{
	for (x = 'a'; x <= 'z'; x++)
	{
	_putchar(x);
	}
	_putchar('\n');
	c++;
	}
}
