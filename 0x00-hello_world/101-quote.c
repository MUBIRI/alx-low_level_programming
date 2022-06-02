#include <stdio.h>
#include <unistd.h>

/**
 * main - return int value 1
 *
 * Description: print standard output in the main function
 *
 * Return: return value 1
 */
int main(void)
{
	write(1, "and the piece of art is useful\" -Dora Korpar, 2015-10-19\n", 59);
	return (0);
}
