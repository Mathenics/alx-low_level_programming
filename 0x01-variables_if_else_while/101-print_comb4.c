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
int x;

for (y = '0'; y <= '9'; y++)
{

for (z = y + 1; z <= '9'; z++)
{

for (x = z + 1; x <= '9'; x++)
{
if ((z != y) != x)
{
putchar(y);
putchar(z);
putchar(x);
if (y == '7' && z == '8')
continue;
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
