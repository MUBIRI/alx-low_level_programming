#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (x == 0)
	{
		x = *s1 - *s2;

		if (*s1 == '\0' || *s2 == '\0')
			break;
		s1++;
		s2++;
	}
	return (x);
}
