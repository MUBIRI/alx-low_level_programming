#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my code goes here */
	if (n > 0)
		printf("%d is a positive\n", n);
	else if (n < 0)
		printf("%d is a negative\n", n);
	else
		printf("%d is a zero\n", n);

	return (0);
}
