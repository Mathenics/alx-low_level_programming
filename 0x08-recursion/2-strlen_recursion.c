#include "main.h"

/**
 * _strlen_recursion - calculates the string length
 * @s: string to be considered
 *
 * Return: integer 
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	
	s++;
	return (_strlen_recursion(s) + 1);
}
