#include <stdio.h>

/**
 * main - print the first 50 fibonacci
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 0, j = 1, k = 2;

	while (i < 50)
	{
		if (i == 0)
		{
			printf("%d", j);
		}
		else if (i == 0)
		{
			printf(", %d", k);
		}
		else
		{
			k += j;
			j = k - j;
			
			printf(", %d", k);
		}
		i++;
	}
	printf("\n");

	return (0);
}
