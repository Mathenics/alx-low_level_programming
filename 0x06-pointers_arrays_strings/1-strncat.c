#include "main.h"

/**
 * char *_strncat - concatenates two strings using at most
 * an imported number of bytes from src
 * @dest: string to be appended upon
 * @src: string to be appended to dest
 * @n: number of byte to be appended from src to dest
 * Return: pointer to the resulting dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);
}
