#include "main.h"

/**
 * print_square - a function that prints a square
 * @n: is the size of the square
 */

void print_square(int size)
{
	int i, j;

	if (i <= 0)
	{
		_putchar('\n');
		return;
	}
        for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar('#');
			_putchar('\n'); 
		}
		
	}
}
