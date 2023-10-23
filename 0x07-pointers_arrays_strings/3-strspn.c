#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: String
 * @accept: Substring
 *
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				len += 1;
		}
	}

	return (len);
}
