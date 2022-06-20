#include "main.h"
#include <string.h>
/**
 * _strpbrk - calculates the length of a prefix string
 * @s: string
 * @accept: has bytes that may or may not be part of the string
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
return (strpbrk(s, accept));
}
