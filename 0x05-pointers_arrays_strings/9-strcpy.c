#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copy string from src to dest
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to character
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
