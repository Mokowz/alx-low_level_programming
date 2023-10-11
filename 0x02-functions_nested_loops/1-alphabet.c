#include <stdio.h>
#include "main.h"

/**
 * main - Print alphabets using a function
 *
 * Return: Always 0
 */
int main(void)
{
	print_alphabet();

	return (0);
}
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');
}
