#include "variadic_functions.h"

/**
 * print_strings - print  strings
 * @separator: SEPARATES THE STRING
 * @n: no. of strings
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *s;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);

		if (separator != NULL && i > 0)
			printf("%s", separator);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", s);
	}
	va_end(args);
	printf("\n");
}
