#include <stdio.h>
/**
* main - A program that print lowercase and uppercase vi alphabets
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
