#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		++i;
	}
	for (j = 0; src[j] != '\0'; ++j, ++i)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
