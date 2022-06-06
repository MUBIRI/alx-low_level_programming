#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int x;
	int z;

	for (x = 0; x <= 99; x++)
	{
		for (z = x + 1; z <= 100; z++)
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			putchar(' ');
			putchar((z / 10) + '0');
			putchar((z % 10) + '0');

			if (x == 98 && z == 99)
				continue;
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
