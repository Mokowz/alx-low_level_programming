#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1:String 1
 * @s2: String 2
 * @n: Length to be used of s2
 *
 * Return: String
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int total_len = 0, lens1 = 0, lens2 = 0, i = 0, count = 0;
	char *newstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
	{
		lens1++;
		i++;
	}
	i = 0;

	while (s2[i])
	{
		lens2++;
		i++;
	}

	if (n >= lens2)
		n = lens2;

	total_len = lens1 + n;

	newstr = malloc(sizeof(char) * total_len);

	if (newstr == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		newstr[i] = s1[i];
	for (; count < n; count++)
		newstr[i] = s2[count];

	return (newstr);
}
