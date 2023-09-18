#include <stdio.h>
#include <stdlib.h>
/**
* main - Program that prints single digit base 10 numbers separated by comma.
*
* Return: Always (Success)
*/
int main(void)

{
int y;

for (y = '0'; y <= '9'; y++)
{
putchar(y);
if (y != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

