#include "main.h"

int sqrt_rec(int n, int a);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_rec(n, 0));
}

/**
 * sqrt_rec - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @a: iterator
 * Return: the resulting square root
 */
int sqrt_rec(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (sqrt_rec(n, a + 1));
}
