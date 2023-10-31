#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - return a pointer to anewly allocated string
 * @str: String
 *
 * Return: Pointer to the new string
 */
char *_strdup(char *str)
{
	int len, i;
	char *newstr;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	newstr = malloc(sizeof(char) * (len + 1));

	if (newstr == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		newstr[i] = str[i];
	}
	newstr[len] = '\0';

	return (newstr);
}
