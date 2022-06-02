#include <stdio.h>
/**
 * main - Enter text point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long longType;
	long long longlongType;
	float floatType;

	printf("size of a char: %ld byte(s)\n", sizeof(charType));
	printf("size of an int: %ld byte(s)\n", sizeof(intType));
	printf("size of a long int: %ld byte(s)\n", sizeof(longType));
	printf("size of a long long int %ld byte(s)\n", sizeof(longlongType));
	printf("size of a float: %ld byte(s)\n", sizeof(floatType));
	return (0);
}
