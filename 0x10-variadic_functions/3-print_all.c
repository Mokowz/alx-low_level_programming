#include "variadic_functions.h"

/**
 * print_integer - print integer
 * @args: list of arguments
 */

void print_integer(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - print float
 * @args: list of arguments
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_character - print a character
 * @args: Arguments list
 */
void print_character(va_list args)
{
	printf("%c", va_arg(args, char));
}

/**
 * print_string - print string
 * @args: list of arguments
 */

void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;
	char *str1 = "";
	char *str2 = ", ";

	op_t operations[] = {
		{'c', print_character},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(args, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (operations[j].c != '\0')
		{
			if (operations[j].c == format[i])
			{
				printf("%s", str1);
				operations[j].f(args);
				str1 = str2;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
