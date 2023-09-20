#include "main.h"

/**
 * _strcmp - compares pointer to two strings
 * @s1: pointer to the first string to be compared
 * @s2: pointer to the second string to be compared
 * Return: if str1 < str2, negative difference of the first unmatched character
 * if str1 == str2, 0
 * if str1 > str2, positive difference of the first unmatched characters
 */

int _strcmp(char *s1, char *s2)

{

	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
