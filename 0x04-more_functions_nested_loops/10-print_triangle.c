#include "main.h"


/**
 * main - check the code
 * print_triangle - function to print triangle of a given size
 * @size: parameter to be considered
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int i, j; /*declaration of variables*/

	if (size <= 0) /*statement as per question to enter new line*/
	{
	_putchar('\n');
	}
	for (i = 1; i <= (size); i++)
	/*for loop for declaring and incrementing i with size increase*/
	{
	for (j = 1; j <= (size); j++)
	/*for loop for declaring & incrementing j size wise*/
	{
	if (j <= (size - i)) /*condition to push # to difference of size to i*/
	_putchar(' ');
	else
	_putchar('#'); /*condition to negate the last condition*/
	}
	_putchar('\n');
	}
	_putchar('\n');
}
