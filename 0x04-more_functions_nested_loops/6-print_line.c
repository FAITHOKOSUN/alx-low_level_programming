#include "main.h"
/**
 * print_line - to print characters
 * @n:  integer to print number of -
 * Return : void
 *
 */

void print_line(int n)

{
	int i = 0;

	while (i < n && n > 0)
	{
		_putchar(95);
		i++;
	}
	_putchar('\n');
}
