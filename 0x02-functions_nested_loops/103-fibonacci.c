#include <stdio.h>

/**
 * main - Add the first 50 even fibonacci
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2;
	long sum = k;

	while (k + j  < 4000000)
	{
		k += j;
		j = k - j;
		if (k % 2 == 0)
		{
			sum += k;
		}
		i++;
	}
	printf("%ld\n", sum);

	return (0);
}
