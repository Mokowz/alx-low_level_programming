#include <stdio.h>

/**
 * main - Print alphabet in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
