#include <stdio.h>

/**
 * main -Entry block
 *
 * Return: 0
 */
int main(void)
{
	char d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}

	char c;

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
