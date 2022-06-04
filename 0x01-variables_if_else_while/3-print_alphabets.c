#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z';)
	{
		putchar (c);
		c++;
	}

	for (c = 'A'; c <= 'Z';)
	{
		putchar (c);
		c++;
	}

	putchar('\n');
	return (0);
}
