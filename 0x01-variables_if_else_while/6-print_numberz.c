#include <stdio.h>
/**
 * main -Entry text point
 *
 * Return: 0
 */
int main(void)
{
	int a = 0;

		while (a < 10)
		{
			putchar(48 + a);
			a++;
		}

	putchar('\n');
	return (0);
}
