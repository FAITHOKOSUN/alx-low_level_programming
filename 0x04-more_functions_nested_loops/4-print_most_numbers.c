#include "main.h"

/**
* print_most_numbers - a function that prints the numbers
* Return: 0
*/

void print_most_numbers(void)
{
char  x;
for (x = 0; x < 10; x++)
{
if (x != 2 && x != 4)
{
continue;
}
_putchar(x + '0');
}
_putchar('\n');
}
