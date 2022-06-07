#include "main.h"
/**
 * print_alphabet - Prints alphabets in lower case
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char n;

	n = 'a';
	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
