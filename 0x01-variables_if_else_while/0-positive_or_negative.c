#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - A program that print if a number is positive, zero or negative.
* Return: Always (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)				/*prints positive if true*/
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)			/*print zero if equal to zero*/
	{
	printf("%d is zero\n", n);
	}
	else
	{
	printf("%d is negative\n", n);
	}

	return (0);
}
