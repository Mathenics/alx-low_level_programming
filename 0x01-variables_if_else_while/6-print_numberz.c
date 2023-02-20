#include <stdio.h>
#include <stdlib.h>
/**
* main - Program that prints single digit base 10 numbers
* using putchar function
* Return: Always (Success)
*/
int main(void)

{
int y;

for (y = '0'; y <= '9'; y++)
putchar(y);
putchar('\n');

return (0);
}
