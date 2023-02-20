#include <stdio.h>
/**
* main - A program that print lowercase and uppercase vi alphabets
* Return: Always (Success)
*/
int main(void)
{
char k, e, q;
e = 'e';
q = 'q';

for (k = 'a'; k <= 'z'; k++)
{
if (k != e && k != q)
putchar(k);
}
putchar('\n');
return (0);
}
