#include "main.h"

/**
 * leet - encode a string
 * @s: String to be encoded
 *
 * Return: String
 */
char *leet(char *s)
{
	char *orig = 'aAeEoOtTlL';
	char *enc = '4433007711';
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == orig[j])
				s[i] = enc[j];
		}
	}

	return (s);
}
