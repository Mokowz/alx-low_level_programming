#include "variadic_functions.h"

/**
 * print_all - print anything
 * @format: Format
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j, separator = 0;
	char *strin;
	va_list args;
	char fargs[] = "cifs";

	va_start(args, format);
	i = 0;

	while (format && format[i])
	{
		j = 0;
		while (fargs[j])
		{
			if (format[i] == fargs[j] && sep)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int)), separator = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int)), separator = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double)), separator = 1;
				break;
			case 's':
				strin = va_arg(args, char *), separator = 1;
				if (!strin)
				{
					printf("(nil)");
					break;
				}
				printf("%s", strin);
				break;
		} i++;
	}
	va_end(args);
	printf("\n");
}
