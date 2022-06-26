#include <stdio.h>
/**
 * main - print arguments received
 * @argc: length of the arguments
 * @argv: arguments passed
 * Return: 0
 */

int main(int argc, char **argv)
{
int a;
for (a = 0; a < argc; a++)
{
printf("%s\n", *argv);
argv++;
}
return (0);
}
