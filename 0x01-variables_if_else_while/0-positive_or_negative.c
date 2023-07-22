#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program that assign a random number and print wether its positive
 * or negative.
 * Description: @n - the number to be assigned
 * Return: Always (0) Success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	/* your code goes there */
	return (0);
}
