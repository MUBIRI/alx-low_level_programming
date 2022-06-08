#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char m;
	int i;
	
	for (i = 1; i <= 10; i++)
	{
		for (m = 'a'; m <= 'z'; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
	}
}
