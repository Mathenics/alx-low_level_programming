#include "main.h"
#include <stdio.h>

/**
 * _strlen - return length of a string
 * @str: string to get its length
 * Return: the length of string
 */

int _strlen(char *str)

{

	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
