#include "main.h"

/**
 * length - length of string
 * @s: String
 *
 * Return: length
 */
int length(char *s)
{
	int i = 0;

	if (*s)
	{
		i = i + length(s + 1);
		return (i += 1);
	}
	return (0);
}

/**
 * indx- string index
 * @i: Integer
 * @s: String
 *
 * Return: result
 */
int indx(int i, char *s)
{
	if (*s)
	{
		if (*s != s[length(s) - 1])
			return (0);
		return (indx(i + 1, s + 1));
	}
	return (1);
}

/**
 * is_palindrome - string is equal in front and back
 * @s: String
 *
 * Return: Boolean
 */
int is_palindrome(char *s)
{
	int i = 1;

	return (indx(i, s));
}
