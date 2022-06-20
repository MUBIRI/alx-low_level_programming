#include "main.h"
/**
 * _memset - Fills memory with a constant byte
 * @s: The memory area to fill up
 * @b: The constant byte
 * @n: The number of bytes of the memory area to fill up
 *
 * Return: The pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a;

	while (a = 0, a < n)
	{
		*(s + a) = b;
		a++;
	}
	return (s);
}
