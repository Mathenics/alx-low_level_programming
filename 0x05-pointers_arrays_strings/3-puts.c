#include "main.h"

/**
 * _puts - prints a string followed by new line to stdout
 * @str: the string to print out
 * Return: void
 */

void _puts(char *str)

{

	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
