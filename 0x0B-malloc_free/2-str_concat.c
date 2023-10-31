#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: String 1
 * @s2: String 2
 *
 * Return: New string
 */
char *str_concat(char *s1, char *s2)
{
	char *newstr;
	int i, len, count = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		len += 1;

	newstr = malloc(sizeof(char) * len);

	if (newstr == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		newstr[i] = s1[i];
	for (; s2[count]; i++)
	{
		newstr[i] = s2[count];
		count++;
	}

	return (newstr);
