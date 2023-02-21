#include <stdio.h>
/**
* main - A program that print lowercas alphabets in reverse order.
* Return: Always (Success)
*/
int main(void)
{
char k;

for (k = 'z'; k >= 'a'; k--)
putchar(k);
putchar('\n');
return (0);
}
