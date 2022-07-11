#include "stdio.h"

/**
 * main - prints prime numbers
 * Return: 0
 */
int main(void)
{
	long i = 612852475143, j;

	for (j = 2; j < i; j++)
	{
		if (i % j == 0)
		{
			i = i / j;
		}
	}
	printf("%ld\n", j);
	return (0);
}
