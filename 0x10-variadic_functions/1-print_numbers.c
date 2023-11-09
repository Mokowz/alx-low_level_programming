#include "variadic_functions.h"

/**
 * print_numbers - print numbers using variadic functions
 * @separator: Separator between the numbers
 * @n: Number of argumnets
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;

	if (separator == NULL)
		pr;
	if (n == 0)
		return;

	var_list args;
	var_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", var_arg(args, int));
		printf("%s%d", var_arg(args, int));
	}
	printf("\n");
	var_end(args);
}
