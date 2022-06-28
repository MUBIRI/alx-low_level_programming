#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *strdup;
	unsigned int x, z;

	if (str == NULL)
	return (NULL);

	for (x = 0; str[x] != '\0'; x++)
	;

	strdup = (char *)malloc(sizeof(char) * (x + 1));

	if (strdup == NULL)
	return (NULL);

	for (z = 0; z <= x; z++)
	strdup[z] = str[z];

	return (strdup);
}
