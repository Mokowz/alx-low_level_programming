#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: Name to be printed
 * @f: Function to print the name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
