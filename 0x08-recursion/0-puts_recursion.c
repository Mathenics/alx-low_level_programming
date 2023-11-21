#include "main.h"
#include "_putchar.c"

/**
 * _puts_recursion - print out a recursive string
 * @s: the parameter to be checked
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
