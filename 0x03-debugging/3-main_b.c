#include <stdio.h>
#include "main.h"
/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: void
*/
int main(void)
{
int day = convert_day(02, 29);
print_remaining_days(2, day, 2000);
return (0);
}
