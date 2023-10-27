#include <stdio.h>

/**
 * main - print number of arguments
 * @argc: Count
 * @argv: Array
 *
 * Return: 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return(0);
}
