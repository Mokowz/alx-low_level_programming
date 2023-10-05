#include <unistd.h>
#include <stdio.h>

/**
 * main - print to the standard error
 *
 * Return: Always 0
 */
int main(void)
{
	char msg[]="and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	write(2, msg, strlen(msg));

	return (0);
}
