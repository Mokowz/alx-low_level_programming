#include "variadic_functions.h"

/**
 * print_strings - print strings followed by separators
 * @separator: Separator
 * @n: Number of strings
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = var_arg(args, char *);

		if (i > 0 && separator != NULL)
			printf("%s", separator);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
	}
}
