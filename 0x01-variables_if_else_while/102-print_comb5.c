#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int num1, num2;
for (num1 = 0; num1 <= 98; num1++)
{
for (num1 = num2 + 1; num2 <= 98; num2++)
{
putchar((num1 / 10) + '0');
putchar((num2 % 10) + '0');32
if (num1 == 98 && num2 == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
