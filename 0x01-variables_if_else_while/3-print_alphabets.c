#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	for (char c = 'a'; c <= 'z';)
	{
		putchar (c);
		c++;
	}
	for (char c = 'A'; c <= 'Z';)
	{
		putchar (c);
		c++;
	}

	putchar('\n');
	return (0);
}
