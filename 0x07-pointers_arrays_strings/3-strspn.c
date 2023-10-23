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
	unsigned int i, j, flag, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len += 1;
				flag = 1;
			}
		}
		if (flag == 0)
			return (len);
	}

	return (0);
}
