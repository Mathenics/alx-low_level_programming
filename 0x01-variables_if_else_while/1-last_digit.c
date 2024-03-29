#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Program that assign number to a variable and determime
 * wether its last digit is less than 6, 0 0r greater than 5
 * Description: @n - the number in consideration
 * Return: always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n",
				n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n",
				n, n % 10);
	}
	else
	{
		printf("Last digit of %i is %i and is 0\n", n, n % 10);
	}

	return (0);
}
