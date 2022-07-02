#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @max: maximum integer value
 * @min: minimum integer value
 * Return: pointer to the newly created array.
 **/

int *array_range(int min, int max)
{
	int i;
	int *z;

	if (min > max)
		return (NULL);
	z = malloc((max - min + 1) * sizeof(int));
	if (z == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		z[i] = min;
		min++;
	}
	return (0);
}
