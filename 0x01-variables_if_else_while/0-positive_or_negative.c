#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - used to check the condition
 *
 * Return: 0
 */
int main(void)
{
	int n;

	 srand(time(0));
	 n = rand() - RAND_MAX / 2;
	 /* code goes here */
if (n > 0)
{
	printf("%d is a positive\n", n);
}
else if (n == 0)
{
	printf("%d is zero\n", n);
}
else
{
	printf("%d is a negative\n", n);
}
return (0);
}
