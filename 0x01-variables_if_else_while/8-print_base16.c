#include <stdio.h>
/**
* main - A program that print base 16 numbers in lowercase.
* Return: Always (Success)
*/
int main(void)
{
int z;
char x;

for (z = '0'; z <= '9'; z++)
putchar(z);

for (x = 'a'; x <= 'f'; x++)
putchar(x);
putchar('\n');
return (0);
}
