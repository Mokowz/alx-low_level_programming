#include <stdio.h>

/**
 * main - Print single numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	putchar('\n');

	return (0);
}
