#include "main.h"

/**
 * _isalpha - Check for alphabetic character
 * @c: Character to be checked
 * Return: 1 for lowercase or uppercase letters 0 otherwise
 */

int _isalpha(int c)
{

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
