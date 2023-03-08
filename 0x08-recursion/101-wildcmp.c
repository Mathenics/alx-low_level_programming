#include <stdio.h>
#include "main.h"
/**
 * wildcmp - Entry Point
 * @s1: input
 * @s2: input
 * Return: 0
 */
int wildcmp(char *s1, char *s2)
{
	return (0);
}

/**
 * palindrome - checks if start and end of string matches
 * @str: string
 * @st: start of string 0
 * @end: end of string from is_palindrome, from lengthc
 * Return: if str is a palindrome
 */
int palindrome(char str[], int st, int end)
{
	if (st >= end)
		return (1);
	if (str[st] != str[end])
		return (0);
	if (st <= end || st < end + 1)
		return (palindrome(str, st + 1, end - 1));
	return (1);
}
