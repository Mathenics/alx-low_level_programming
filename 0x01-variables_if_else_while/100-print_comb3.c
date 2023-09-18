#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - Program that prints single digit base 10 numbers combination
*
* Return: Always 0 (Success)
*/
int main(void)
{
int y;
int z;

for (y = '0'; y <= '9'; y++)
{

for (z = y + 1; z <= '9'; z++)
{
if (z != y)
{
putchar(y);
putchar(z);
if (y == '8' && z == '9')
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
