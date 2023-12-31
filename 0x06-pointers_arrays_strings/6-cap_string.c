#include "main.h"

/**
 * cap_string - capitalize words of a string
 * @s: String to capitalize
 *
 * Return: String capitalized
 */
char *cap_string(char *s)
{
	int i, j;
	char specs[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;

		for (j = 0; j < 13; j++)
		{
			if (s[i] == specs[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
		}
	}

	return (s);
}
