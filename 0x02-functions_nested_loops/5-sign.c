#include "main.h"
/**
 * print_sign - prints a sign of a digit
 * @n: the int to check
 * Return: 1 and prints + if n is greater than 0
 * 0 and prints 0 if n is zero
 * -1 if n is less 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(0);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
	return (0);
}
