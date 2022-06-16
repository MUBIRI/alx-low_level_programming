#include <stdio.h>
#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: pointer
 * @src: sorce pointer
 * @n: pointer
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0';)

		for (b = 0; b < n && src[b] != '\0'; b++)
		{
			dest[a + b] = src[b];
		}
	a++;
	dest[a + b] = '\0';
	return (dest);
}
