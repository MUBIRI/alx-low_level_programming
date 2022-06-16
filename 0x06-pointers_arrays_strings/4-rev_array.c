#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int b;
	int i;

	for (b = 0; b < n--; b++)
	{
		i = a[b];
		a[b] = a[n];
		a[n] = i;
	}
}
