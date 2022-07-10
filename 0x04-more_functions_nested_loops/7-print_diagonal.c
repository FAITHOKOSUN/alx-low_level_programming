#include "main.h"

/**
 *  print_diagonal - a function that draws a diagonal line
 *  @n: the number of times the character is printed
 */

void print_diagonal(int n)
{
	int i = 0;

	while (n < i && n > 0)
	{
		_putchar(92);
		i++;
	}
	_putchar('\n');
}

